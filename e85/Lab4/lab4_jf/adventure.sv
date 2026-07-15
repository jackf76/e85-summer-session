module adventure(
    input logic N, S, E, W, clk, reset,
    output logic WIN, DIE
);
logic hasSword;
logic inStash;

roomFSM room(N, S, E, W, clk, reset, hasSword, inStash, WIN, DIE);
swordFSM sword(inStash, clk, reset, hasSword);
endmodule

module roomFSM (
    input  logic N, S, E, W, clk, reset, hasSword,
    output logic inStash, WIN, DIE
);

    typedef enum logic [2:0] {
        CAVE,
        TUNNEL,
        RIVER,
        STASH,
        DEN,
        GRAVEYARD,
        VAULT
    } roomState;
    roomState currentState, nextState;

    always_ff @(posedge clk or posedge reset) begin
        if (reset)
            currentState <= CAVE;
        else
            currentState <= nextState;
    end

    always_comb begin
        inStash = 0;
        WIN = 0;
        DIE = 0;
        nextState = currentState;

        case (currentState)

            CAVE: begin
                if (E)
                    nextState = TUNNEL;
            end

            TUNNEL: begin
                if (W)
                    nextState = CAVE;
                else if (S)
                    nextState = RIVER;
            end

            RIVER: begin
                if (N)
                    nextState = TUNNEL;
                else if (W)
                    nextState = STASH;
                else if (E) 
                nextState = DEN;
            end

            STASH: begin
                inStash = 1;
                if (E)
                    nextState = RIVER;
            end

            DEN: begin
                if (hasSword) begin
                    if (W)
                        nextState = RIVER;
                    else if (E)
                        nextState = VAULT;
                end
                else
                    nextState = GRAVEYARD;
            end

            GRAVEYARD: begin
                DIE = 1;
                nextState = GRAVEYARD;
            end

            VAULT: begin
                WIN = 1;
                nextState = VAULT;
            end

            default: begin
                nextState = CAVE;
            end

        endcase
    end
endmodule

module swordFSM(
    input logic inStash, clk, reset,
    output logic hasSword
);

    typedef enum logic {
        NOSWORD,
        SWORD
    } swordState;

    swordState currentState, nextState;

    always_ff @(posedge clk or posedge reset) begin
        if (reset)
            currentState <= NOSWORD;
        else
            currentState <= nextState;
    end
    
    always_comb begin
        hasSword = 0;
        nextState = currentState;

        case (currentState)

            NOSWORD: begin
                hasSword = 0;
                if (inStash)
                    nextState = SWORD;
            end

            SWORD: begin
                hasSword = 1;
                nextState = SWORD;
            end

            default: begin
                nextState = NOSWORD;
            end

        endcase
    end
endmodule
