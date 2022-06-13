#include "main.h"
/**
 *swap_int - swap integer
 *@a: first num
 *@b: second num
 *Description: swap the value of two integeres
 *Return: always (0)
 */
void swap_int(int *a, int *b) {
*a = *a + *b;
*b = *a - *b;
*a = *a - *b;
}

