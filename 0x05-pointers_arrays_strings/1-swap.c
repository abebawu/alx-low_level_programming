#include "main.h"
/**
 *swap value
 *@a: pointer
 *@b: pointer
 *Return: always 0.
 */
void swap_int(int *a, int *b){
*a = *a + *b;
*b = *a - *b;
*a = *a - *b;
}

