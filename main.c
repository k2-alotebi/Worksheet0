#include <stdio.h>
#include "tictactoe.h"

int main(void) {
    Game game;
    init_game(&game);
    
    printf("Welcome to TicTacToe!\n");
    print_board(&game);
    
    int moves = 0;
    while (moves < 9) {
        int row, col;
        printf("Player %c, enter row (0-2) and column (0-2): ", game.current_player);
        scanf("%d %d", &row, &col);
        
        if (make_move(&game, row, col)) {
            print_board(&game);
            
            if (check_winner(&game)) {
                printf("Player %c wins!\n", game.current_player);
                break;
            }
            
            switch_player(&game);
            moves++;
        } else {
            printf("Invalid move! Try again.\n");
        }
    }
    
    if (moves == 9 && !check_winner(&game)) {
        printf("It's a draw!\n");
    }
    
    return 0;
}
