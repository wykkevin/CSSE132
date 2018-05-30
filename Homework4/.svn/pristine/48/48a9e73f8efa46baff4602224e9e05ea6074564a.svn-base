/*
 * CSSE 132
 * Rose-Hulman Institute of Technology
 * Computer Science and Software Engineering
 *
 * test.c - Source file with tests for the homework.
 *          This is a file you need to hand in!
 *          
 *          This file contains the tests you run to verify
 *          the code for homework 4.
 *
 * This file contains code used by labs in the CSSE 132 class.
 * If you edit this file for class, be sure to put your name(s) here!
 *
 * Edited by
 * NAMES:
 *
 */
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "unity/unity.h"

// functions tested by this test harness
int length(char* string);
int lengthNoArrays(char* string);
int twosNegate(int input);
int leetSpeak(char* tochange);


void setUp(void) { }
void tearDown(void) { }

void
test_length(void)
{
  TEST_ASSERT_EQUAL_INT(0, length(""));
  TEST_ASSERT_EQUAL_INT(1, length("a"));
  TEST_ASSERT_EQUAL_INT(26, length("abcdefghijklmnopqrstuvwxyz"));
  TEST_ASSERT_EQUAL_INT(10, length("Whee! fun!"));
}

void
test_lengthNoArrays(void)
{
  TEST_ASSERT_EQUAL_INT(0, lengthNoArrays(""));
  TEST_ASSERT_EQUAL_INT(1, lengthNoArrays("a"));
  TEST_ASSERT_EQUAL_INT(26, lengthNoArrays("abcdefghijklmnopqrstuvwxyz"));
  TEST_ASSERT_EQUAL_INT(10, lengthNoArrays("Whee! fun!"));
}

void
test_twosNegate(void)
{
  // can typecast force into unsigned to compare as bits
  TEST_ASSERT_EQUAL_INT((unsigned int) 0xFFFFFFFF, (unsigned int) twosNegate(1));
  TEST_ASSERT_EQUAL_INT((unsigned int) 0x00000000, (unsigned int) twosNegate(0));
  TEST_ASSERT_EQUAL_INT((unsigned int) 0x00000002, (unsigned int) twosNegate(-2));
  TEST_ASSERT_EQUAL_INT(  -1, twosNegate(1));
  TEST_ASSERT_EQUAL_INT(-128, twosNegate(128));
  TEST_ASSERT_EQUAL_INT(   0, twosNegate(0));
  TEST_ASSERT_EQUAL_INT(   1, twosNegate(0xFFFFFFFF));
  TEST_ASSERT_EQUAL_INT(   2, twosNegate(0xFFFFFFFE));
}

void
test_leetSpeak(void)
{
  char str0[] =     "E";
  char str0_exp[] = "3";

  printf(" ... testing \"%s\" ... \n", str0);
  TEST_ASSERT_EQUAL_INT(1, leetSpeak(str0));
  TEST_ASSERT_EQUAL_STRING(str0_exp, str0);

  char str1[] =     "AELOT";
  char str1_exp[] = "43107";

  printf(" ... testing \"%s\" ... \n", str1);
  TEST_ASSERT_EQUAL_INT(5, leetSpeak(str1));
  TEST_ASSERT_EQUAL_STRING(str1_exp, str1);

  char str2[] = "nothing to change.";

  printf(" ... testing \"%s\" ... \n", str2);
  TEST_ASSERT_EQUAL_INT(0, leetSpeak(str2));
  TEST_ASSERT_EQUAL_STRING(str2, str2);

  char str3[] =     "GREAT KNOWLEDGE";
  char str3_exp[] = "GR347 KN0W13DG3";

  printf(" ... testing \"%s\" ... \n", str3);
  TEST_ASSERT_EQUAL_INT(7, leetSpeak(str3));
  TEST_ASSERT_EQUAL_STRING(str3_exp, str3);
}


int
main(int argc, char** argv)
{
  UnityBegin("HW4 test.c");

  RUN_TEST(test_length);
  RUN_TEST(test_lengthNoArrays);
  RUN_TEST(test_twosNegate);
  RUN_TEST(test_leetSpeak);

  UnityEnd();
}
