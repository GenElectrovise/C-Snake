/*
 * constants.h
 *
 *  Created on: 23 May 2021
 *      Author: adam_
 */

#ifndef CONSTANTS_H_
#define CONSTANTS_H_

// Booleans
#define TRUE 1
#define FALSE 0
#define BOOLEAN int

// Keys
#define KEY_W 119
#define KEY_A 97
#define KEY_S 115
#define KEY_D 100
#define ARROW_KEY_START 224
#define ARROW_UP (ARROW_KEY_START * 72)
#define ARROW_LEFT (ARROW_KEY_START * 75)
#define ARROW_DOWN (ARROW_KEY_START * 80)
#define ARROW_RIGHT (ARROW_KEY_START * 77)

// Movement flags (as if in a 3x3 grid)
#define MOVEMENT_FLAG int
#define MF_UP 2
#define MF_DOWN 8
#define MF_LEFT 4
#define MF_RIGHT 6

#endif /* CONSTANTS_H_ */
