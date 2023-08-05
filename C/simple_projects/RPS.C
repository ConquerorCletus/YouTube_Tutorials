#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
/**
 * main - Rock, paper scissors game entry point
 * Return: 0
 */
int main(void)
{
	

	int computer_choice, player_choice;
	char option;
	
	while (1) 
	{
		/* The game interface for rock, paper, scissors game */
		printf("\n\t\t______ WELCOME TO ROCK, PAPER, SCISSORS GAME ________\t\t\n");
		printf("\t\t______ SELECT AN OPTION: ________\t\t\n");
		printf("\t\t______ (a) START GAME ________\t\t\n");
		printf("\t\t______ (b) QUIT GAME ________\t\t\n");
		scanf("%c", &option);

		/* option to start and quit the game */
		switch (option) 
		{
			case 'a':
				printf("\n\t\t______ THE GAME BEGINS NOW: _______\t\t\n");
				printf("\t\t______ ROCK(1), PAPER(2), SCISSORS(3) !!!! ________\t\t\n");
				printf("\t\t______ ROCK(1), PAPER(2), SCISSORS(3) !!!! ________\t\t\n");
				printf("\t\t______ ROCK(1), PAPER(2), SCISSORS(3) !!!! ________\t\t\n");
				printf("\t\t______ MAKE YOUR CHOICE BETWEEN 1 - 3 ________\t\t\n");

				/* To select random choice for computer */
				srand(time(NULL));
				computer_choice = (rand() % 3) + 1;

				scanf("%d", &player_choice);

				/* if player and computer chose the same */
				if (player_choice == computer_choice)
					printf("\n The game is a tie \n ");

				/* if player chose rock */
				else if (player_choice == 1) 
				{
				
					printf("\n You chose ROCK \n");
					if (computer_choice == 2)
					{

						printf("\n Computer chose PAPER \n");
						printf("You LOST !!! \n");
					}
					else if (computer_choice == 3)
					{

						printf("Computer chose SCISSORS \n");
						printf("You Won !!! \n");
					}
				}
				/* if player chose paper */
				else if (player_choice == 2) 
				{

					printf("You chose PAPER \n");
					if (computer_choice == 1)
					{

						printf("Computer chose ROCK \n");
						printf("You Won !!! \n");
					}
					else if (computer_choice == 3)
					{

						printf("Computer chose SCISSORS \n");
						printf("You LOST !!! \n");
					}
				}
				/* if player chose Scissors */
				else if (player_choice == 3) 
				{

					printf("You chose SCISSORS \n");
					if (computer_choice == 1)
					{

						printf("Computer chose ROCK \n");
						printf("You LOST !!! \n");
					}
					else if (computer_choice == 2)
					{

						printf("Computer chose PAPER \n");
						printf("You Won !!! \n");
					}
				}

				/* for an incorrect choice */
				else
				{
					printf("Choose correctly between (1 - 3) \n");
				}

				break;


			case 'b':
				exit(0);
				break;
			
			default:
				printf("Enter the correct Option \n");
				break;
		}
	}
	return (0);
}
