/*
 * CSSE 132
 * Rose-Hulman Institute of Technology
 * Computer Science and Software Engineering
 *
 * problem1.c: this file is where you implement your solutions
 *             for the homework assignment.
 *
 * This file contains code for homework in the CSSE 132 class.
 * When you edit this file for class, be sure to put your name here!
 *
 * Edited by
 * NAME: Yuankai Wang (Kevin)
 *
 */
#include <stdlib.h>
#include <stdio.h>


/**
 * This function counts the number of characters in the given string.
 *
 * For example: length("Thing") returns 5.
 * For this function, You MUST use the array brackets: [ and ].
 *
 * @param str - a string to measure
 * @returns the number of characters, excluding the null terminator.
 */
int length(char* string)
{
  int i = 0;
  while (string[i] != '\0'){
     i++;
  }
  return i;
}


/**
 * This function is the same as length() but doesn't use array operators.
 *
 * For this function, You MUST NOT use the square brackets: [ or ].
 *
 * @param str - a string to measure
 * @returns the number of characters, excluding the null terminator.
 */
int lengthNoArrays(char* string)
{
  char* s = string;
  while (*s != '\0'){
     s++;
  }
  return s - string;
}


/**
 * This function performs twos complement negation on an integer by
 * flipping the bits and adding one.  You are only allowed to use
 * bitwise operations and add 1.  You may not use any minus signs (-)
 * or subtraction to solve this problem.
 * For example: twosNegate(1) should return -1, or in hex: 
 *              twosNegate(0x00000001) == 0xFFFFFFFF.
 * @param input - the integer to negate 
 * @return the negation of the input.
 */
int twosNegate(int input)
{
  int output = ~input + 1;
  return output;
}


/**
 * This function iterates through a string and changes it to "L33TSP34K".
 * That means the upper-case characters 
 * A, E, L, O, T are replaced with the characters for
 * 4, 3, 1, 0, 7 respectively.
 * Lower case characters are not modified.
 *
 * For example, GREAT KNOWLEDGE becomes GR347 KN0W73DG3.
 *
 * You can assume the string is properly null-terminated.
 * Write this function yourself using a loop.
 *
 * @param tochange - the string to modify
 * @return the number of characters changed.
 */
int leetSpeak(char* tochange)
{
  int count = 0;
  int i = 0; 
 while (tochange[i] != '\0'){
     if (tochange[i] == 'A'){
        tochange[i] = '4';
	count++;
     }
     if (tochange[i] == 'E'){
        tochange[i] = '3';
	count++;
     }
     if (tochange[i] == 'L'){
        tochange[i] = '1';
	count++;
     }
    if (tochange[i] == 'O'){
        tochange[i] = '0';
	count++;
     }
    if (tochange[i] == 'T'){
        tochange[i] = '7';
	count++;
     }
    i++;
  }
  return count;
}

/** DO NOT create a main function in this file or the test executable won't work. **/
