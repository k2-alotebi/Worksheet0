#ifndef TICTACTOE_H
#define TICTACTOE_H

#define BOARD_SIZE 3

typedef struct {
    char board[BOARD_SIZE][BOARD_SIZE];
    char current_player;
} Game;

void init_game(Game *game);
void print_board(Game *game);
int make_move(Game *game, int row, int col);
int check_winner(Game *game);
void switch_player(Game *game);

#endif
