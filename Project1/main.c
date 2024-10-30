#include <string.h>
#include "main.h"


char* RPSGame(const char* player1, const char* player2) {
    if (strcmp(player1, "Rock") == 0) {
        if (strcmp(player2, "Scissors") == 0) return "Player 1 wins";
        if (strcmp(player2, "Paper") == 0) return "Player 2 wins";
    }
    if (strcmp(player1, "Paper") == 0) {
        if (strcmp(player2, "Rock") == 0) return "Player 1 wins";
        if (strcmp(player2, "Scissors") == 0) return "Player 2 wins";
    }
    if (strcmp(player1, "Scissors") == 0) {
        if (strcmp(player2, "Paper") == 0) return "Player 1 wins";
        if (strcmp(player2, "Rock") == 0) return "Player 2 wins";
    }
    if (strcmp(player1, player2) == 0) {
        return "Draw";
    }
    return "Invalid";
}

int main() {
    return 0;
}