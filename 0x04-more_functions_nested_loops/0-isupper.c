/**
 * _isupper - checks for upercase.
 *
 * @c: caracter to check.
 *
 * Return: 1 if c is upercase, otherwise return 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
