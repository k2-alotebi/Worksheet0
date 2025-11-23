#include <stdio.h>
#include "tictactoe.h"

void init_game(Game *game) {
    game->current_player = 'X';
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            game->board[i][j] = ' ';
        }
    }
}

void print_board(Game *game) {
    printf("\n");
    for (int i = 0; i < BOARD_SIZE; i++) {
        printf(" %c | %c | %c\n", game->board[i][0], game->board[i][1], game->board[i][2]);
        if (i < BOARD_SIZE - 1) printf("-----------\n");
    }
    printf("\n");
}

int make_move(Game *game, int row, int col) {
    if (row < 0 || row >= BOARD_SIZE || col < 0 || col >= BOARD_SIZE) {
        return 0;  // Invalid move
    }
    if (game->board[row][col] != ' ') {
        return 0;  // Cell already occupied
    }
    game->board[row][col] = game->current_player;
    return 1;  // Valid move
}

int check_winner(Game *game) {
    // Check rows
    for (int i = 0; i < BOARD_SIZE; i++) {
        if (game->board[i][0] == game->board[i][1] && 
            game->board[i][1] == game->board[i][2] && 
            game->board[i][0] != ' ') {
            return 1;
        }
    }
    
    // Check columns
    for (int j = 0; j < BOARD_SIZE; j++) {
        if (game->board[0][j] == game->board[1][j] && 
            game->board[1][j] == game->board[2][j] && 
            game->board[0][j] != ' ') {
            return 1;
        }
    }
    
    // Check diagonals
    if (game->board[0][0] == game->board[1][1] && 
        game->board[1][1] == game->board[2][2] && 
        game->board[0][0] != ' ') {
        return 1;
    }
    if (game->board[0][2] == game->board[1][1] && 
        game->board[1][1] == game->board[2][0] && 
        game->board[0][2] != ' ') {
        return 1;
    }
    
    return 0;
}

void switch_player(Game *game) {
    game->current_player = (game->current_player == 'X') ? 'O' : 'X';
}
