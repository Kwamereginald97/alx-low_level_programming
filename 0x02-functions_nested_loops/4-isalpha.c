#include "main.h"

/**
 * _isalpha - function that checks for alphabets
 *
 * @c: parameter to checked
 *
 * Return: 1 if it os an alphabet
 * and 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
