
/*
 * CSSE 132
 * Rose-Hulman Institute of Technology
 * Computer Science and Software Engineering
 *
 * problems.c: this file is where you implement your solutions
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
 * This function allocates a new string that contains every other character
 * from the input string.  
 * For example, skipper("AbAbAb") returns "AAA"
 *
 * BE SURE to allocate the right number of bytes, no more and no less.
 * DO NOT de-allocate or free the string after you make it.
 *
 * IMPORTANT: any code using this function MUST de-allocate the string.
 *
 * HINT: you may want to copy your "length" function from HW4 into this file so
 * you can use it.
 *
 * @param input - the string to copy some characters from
 * @return the address of a newly allocated string
 */
char* skipper(char* input)
{
  int l;
  l = length(input);
  if (l%2!=0){
    l=l+1;
  }
  char* mem = malloc( 2*l );
  int i;
  for(i = 0;i<l/2;i++){
    mem[i] = *(input+i*2);
  }
  return mem;
}


/**
 * This function reads a string representation of a positive integer and
 * returns the value as an int.
 * For example, string2num("10") returns 10.
 *
 * You may assume the input is a properly formed positive integer.  This means
 * you do not have to handle negative integers or non-integer characters.
 * you MUST NOT call other c functions in string2num unless you implement them
 * yourself in this file.
 *
 * HINT: you may want to copy your "length" function from HW4 into this file so
 * you can use it here.
 *
 * @param input - the string to interpret as an integer
 * @return the value as an integer
 */
int string2num(char* input)
{
  int output, l, i;
  output = 0;
  l=length(input);
  for (i = 0;i<l;i++){
    output = output*10+(input[i]-'0');
  }
  return output;
}

/** DO NOT create a main function in this file or the test executable won't work. **/
int length(char* string)
{
  char* s = string;
  while (*s != '\0'){
     s++;
  }
  return s - string;
}

