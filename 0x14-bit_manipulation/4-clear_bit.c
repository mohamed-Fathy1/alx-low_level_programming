#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * clear_bit - function
 * @n: input
 * @index: input
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index) {
    if (index >= sizeof(unsigned long int) * 8) {
        return -1;
    }
    *n &= ~(1 << index);
    return 0;
}
