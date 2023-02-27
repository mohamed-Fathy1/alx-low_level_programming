/**
 * swap_int - main function
 *
 * @a: first parameter
 * @b: second parameter
 */
void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
