#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SNAKES_LADDERS 7

enum Player { PLAYER1, PLAYER2 };

int rollDie() {
    return rand() % 6 + 1;
}

void printBoard(int player1, int player2, const int snakeLadderPositions[][2]) {
    int board[101];

    for (int i = 1; i <= 100; i++) {
        board[i] = i;
    }

    for (int i = 0; i < NUM_SNAKES_LADDERS; i++) {
        board[snakeLadderPositions[i][0]] = snakeLadderPositions[i][1];
    }

    int alt = 0;
    int iterLR = 101;
    int iterRL = 80;
    int val = 100;

    while (val--) {
        if (alt == 0) {
            iterLR--;
            if (iterLR == player1) {
                printf("#P1 ");
            } else if (iterLR == player2) {
                printf("#P2 ");
            } else
                printf("%d ", board[iterLR]);

            if (iterLR % 10 == 1) {
                printf("\n\n");
                alt = 1;
                iterLR -= 10;
            }
        } else {
            iterRL++;
            if (iterRL == player1) {
                printf("#P1 ");
            } else if (iterRL == player2) {
                printf("#P2 ");
            } else
                printf("%d ", board[iterRL]);

            if (iterRL % 10 == 0) {
                printf("\n\n");
                alt = 0;
                iterRL -= 30;
            }
        }
        if (iterRL == 10)
            break;
    }
    printf("\n");

    printf("Ladders: ");
    for (int i = 0; i < NUM_SNAKES_LADDERS; i++) {
        if (snakeLadderPositions[i][1] > 0) {
            printf("from %d to %d, ", snakeLadderPositions[i][0], snakeLadderPositions[i][0] + snakeLadderPositions[i][1]);
        }
    }

    printf("\nSnakes: ");
    for (int i = 0; i < NUM_SNAKES_LADDERS; i++) {
        if (snakeLadderPositions[i][1] < 0) {
            printf("from %d to %d, ", snakeLadderPositions[i][0], snakeLadderPositions[i][0] + snakeLadderPositions[i][1]);
        }
    }

    printf("\n\n");
}

int movePlayer(int currentPlayer, int roll, int playerPositions[], const int snakeLadderPositions[][2]) {
    int newPosition = currentPlayer + roll;

    for (int i = 0; i < NUM_SNAKES_LADDERS; i++) {
        if (newPosition == snakeLadderPositions[i][0]) {
            newPosition += snakeLadderPositions[i][1];
            break;
        }
    }

    if (newPosition > 100) {
        return currentPlayer;
    }

    return newPosition;
}

int main() {
    srand(time(0));
    int playerPositions[2] = {0};
    const int snakeLadderPositions[NUM_SNAKES_LADDERS][2] = {
        {6, 30}, {23, -14}, {45, -34}, {61, 7}, {65, -13}, {77, 11}, {98, -10}
    };

    printf("Snake and Ladder Game\n");

    while (1) {
        for (enum Player currentPlayer = PLAYER1; currentPlayer <= PLAYER2; currentPlayer++) {
            printf("\nPlayer %d, press Enter to roll the die...", currentPlayer + 1);
            getchar();
            int roll = rollDie();
            printf("You rolled a %d.\n", roll);

            playerPositions[currentPlayer] = movePlayer(playerPositions[currentPlayer], roll, playerPositions, snakeLadderPositions);
            printf("Player %d is now at square %d.\n", currentPlayer + 1, playerPositions[currentPlayer]);

            printBoard(playerPositions[PLAYER1], playerPositions[PLAYER2], snakeLadderPositions);

            if (playerPositions[currentPlayer] == 100) {
                printf("Player %d wins!\n", currentPlayer + 1);
                return 0;
            }
        }
    }

    return 0;
}
