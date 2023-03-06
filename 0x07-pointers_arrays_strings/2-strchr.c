/**
 * _strchr - main function
 *
 * @s: first input
 * @c: second input
 *
 * Return: char pointer
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
