/*
 * snake.c
 *
 *  Created on: 23 May 2021
 *      Author: GenElectrovise
 */

// Includes
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "constants.h"
#include <unistd.h>

// Structures
struct Snake {

	MOVEMENT_FLAG movementFlag;

	// 10x10 board
	int currentPosition[100];
	int previousPosition[100];
};

// Variables
struct Snake snake;
BOOLEAN finished = FALSE;

// Stubs
int main();
void tick();
void showSnake(struct Snake snake);
void getUserInput(int *userInput);
void processUserInput(int *userInput, struct Snake snake);
void shuffleSnake(struct Snake snake);
void checkWinLose(struct Snake snake);

// Functions
int main() {
	printf("Launching snake!\n");

	while (finished != TRUE) {
		tick();
	}

	return 0;
}

void tick() {
	sleep(1);

	int userInput = 0;
	showSnake(snake);
	getUserInput(&userInput);
	processUserInput(&userInput, snake);
	shuffleSnake();

	printf("\n");
}

void showSnake(struct Snake snake) {
	printf("\n Show snake");
}

// Pass the memory address (pointer) to the location of the userInput variable.
void getUserInput(int *userInput) {

	if (kbhit()) {

		int i1 = 1;
		int i2 = 1;

		// Arrow key strokes are 2 ASCII chars long, so have to get 2 ints from getch buffer
		i1 = getch();
		if (i1 == ARROW_KEY_START) {
			i2 = getch();
		}

		printf("\n i1: %d", i1);
		printf("\n i2: %d", i2);

		// If either are <1, change to 1 so can multiply
		if (i1 < 1) {
			i1 = 1;
		}
		if (i2 < 1) {
			i2 = 1;
		}

		// Place the product of the variables into the-integer-sized-gap-at-the-location-of-userInput's-pointer
		*userInput = i1 * i2;
		printf("\n User input: %d", *userInput);
	}
}

void processUserInput(int *userInput, struct Snake snake) {

	printf("\n Movement flag was: %d", snake.movementFlag);

	switch (*userInput) {
	case KEY_W:
		snake.movementFlag = MF_UP;
		break;

	case KEY_A:
		snake.movementFlag = MF_LEFT;
		break;

	case KEY_S:
		snake.movementFlag = MF_DOWN;
		break;

	case KEY_D:
		snake.movementFlag = MF_RIGHT;
		break;

	case ARROW_UP:
		snake.movementFlag = MF_UP;
		break;

	case ARROW_DOWN:
		snake.movementFlag = MF_DOWN;
		break;

	case ARROW_LEFT:
		snake.movementFlag = MF_LEFT;
		break;

	case ARROW_RIGHT:
		snake.movementFlag = MF_RIGHT;
		break;
	}

	printf("\n Movement flag is now: %d", snake.movementFlag);
}

void shuffleSnake(struct Snake snake) {
	printf("\n Shuffle snake");
}

void checkWinLose(struct Snake snake) {
	printf("\n Check win/lose");
}
