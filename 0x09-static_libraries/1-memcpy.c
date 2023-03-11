/**
 * _memcpy - main function
 *
 * @dest: first input
 * @src: second input
 * @n: third input
 *
 * Return: char pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
