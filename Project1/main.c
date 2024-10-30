#include <string.h>
#include "main.h"


char* RPSGame(char player1[], char player2[]) {
    if (strcmp(player1, "Rock") == 0) {
        if (strcmp(player2, "Scissors") == 0) return "Player1";
        if (strcmp(player2, "Paper") == 0) return "Player2";
    }
    if (strcmp(player1, "Paper") == 0) {
        if (strcmp(player2, "Rock") == 0) return "Player1";
        if (strcmp(player2, "Scissors") == 0) return "Player2";
    }
    if (strcmp(player1, "Scissors") == 0) {
        if (strcmp(player2, "Paper") == 0) return "Player1";
        if (strcmp(player2, "Rock") == 0) return "Player2";
    }
    if (strcmp(player1, player2) == 0) {
        return "Draw";
    }
    return "Invalid";
}

int main() {
    return 0;
}