/**
 * _strspn - main function
 *
 * @s: first input
 * @accept: second input
 *
 * Return: char pointer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, a;

	for (i = 0; s[i] >= '\0'; i++)
	{
		a = 0;
		for (j = 0; accept[j] >= '\0'; j++)
		{
			if (s[i] == accept[j])
				a = 1;
		}
		if (a != 1)
			return (i);
	}
	return (0);
}
