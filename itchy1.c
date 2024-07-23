#include <stdio.h>
#include <stdlib.h>

char board[3][3];

void drawBoard() {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

void markBoard(char mark, int pos) {
    int row = (pos - 1) / 3;
    int col = (pos - 1) % 3;
    board[row][col] = mark;
}

int main() {
    int i, pos;
    char mark;
    for (i = 0; i < 9; i++) {
        drawBoard();
        mark = (i % 2 == 0) ? 'X' : 'O';
        printf("Turno del jugador %c, ingresa la posición: ", mark);
        scanf("%d", &pos);
        markBoard(mark, pos);
    }
    drawBoard();
    return 0;
}
