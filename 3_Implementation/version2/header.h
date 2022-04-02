/**
* @file header.h
* @author Komal
* @brief Interface for Adding two numbers with underflow and overflow checks
* @version 0.1
* @date 2022-4-02
*
* @copyright copyright (c) 2022
*
*
*/

#ifndef _ADD_INTEGERS_H
#define _ADD_INTEGERS_H

#include <stdio.h>
#include<limits.h>

typedef enum function_status_t
{
  SUCCESS,
  OVERFLOW,
  UNDERFLOW
}function_status_t;
/**
* @brief Function to add 2 integer number
*
*@param param1[in]operand1 to be added
*@param param2[in]operand2 to be added
*@param result[out]Result of add operation if succes
*@return function_status_t Resukt of the function excution
*/

 function_status_t add_integers(int param1,int param2, int* result);

#endif /* _ADD_INTEGERS_H_ */

