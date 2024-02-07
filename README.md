Rock, Paper, Scissors Game in C

This C program implements a simple console-based Rock, Paper, Scissors game, providing an interactive experience for users to play against the computer. The program guides the player through a series of choices, generates a random move for the computer, and then determines the winner based on the traditional rules of the game.

Key Features:

User Interaction: The game begins with a friendly welcome message, prompting the user to choose their move among Rock, Paper, or Scissors.
Randomized Computer Move: The computer's move is generated randomly using the rand() function and the current time, adding an element of unpredictability to the game.
Outcome Determination: The user's choice and the computer's move are compared to determine the winner, with clear messages displayed for a tie, user victory, or computer victory.
Play Again Option: After each round, the program asks if the user wants to play again. If the user chooses to continue, the game restarts; otherwise, it displays a farewell message and exits.
How to Play:

Run the program in a C environment.
Follow the on-screen prompts to choose Rock (1), Paper (2), or Scissors (3).
The computer's move is revealed, and the winner is determined.
Choose to play again or exit the game.
Implementation Details:

The program utilizes standard C libraries such as stdio.h, stdlib.h, and time.h.
User input is obtained using the scanf function, ensuring valid choices (1, 2, or 3).
The computer's move is generated with rand() and srand(time(NULL)).
The game logic efficiently determines the winner based on the user and computer choices.
A loop structure (do-while) facilitates multiple rounds of gameplay until the user opts to exit.
Example Output:

Welcome to Rock, Paper, Scissors!

Choose your move:
1. Rock
2. Paper
3. Scissors
Enter your choice (1/2/3): 2
User's choice: 2
Computer's choice: 1
Congratulations! You win!
Do you want to play again? (1 for yes, 0 for no): 1

Choose your move:
1. Rock
2. Paper
3. Scissors
Enter your choice (1/2/3): 3
User's choice: 3
Computer's choice: 2
Computer wins. Better luck next time!
Do you want to play again? (1 for yes, 0 for no): 0

Thanks for playing! Goodbye.
