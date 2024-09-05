#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialize random number generator
    srand(time(0));

    int player, computer = (rand() % 3);
    const char *choices[] = {"Fire", "Water", "Plant"};

    printf("Choose 0 for Fire, 1 for Water, and 2 for Plant:\n ");
    scanf("   %d", &player);
    printf(" \n");

    // Check for invalid input
    if (player < 0 || player > 2) {
        printf("Invalid choice! Please choose 0, 1, or 2.\n");
        printf(" \n");
        return 1;  // Exit if the choice is invalid
    }

    // Display the player's and computer's choices
    printf("You chose: %s\n", choices[player]);
    printf("Computer chose: %s\n", choices[computer]);

    // Determine the outcome
    if (player == computer) {
        printf("Both Choosed Same, It's a draw!!!!\n");
    } else if ((player == 0 && computer == 2) ||  // Fire beats Plant
               (player == 1 && computer == 0) ||  // Water beats Fire
               (player == 2 && computer == 1)) {  // Plant beats Water
        printf("%s Beats %s Congrats You Win!!\n", choices[player], choices[computer]);
        printf(" \n");
    } else {
        printf("%s Beats %s Oops You Lose!!\n", choices[computer], choices[player]);
        printf(" \n");
    }

    return 0;
}
