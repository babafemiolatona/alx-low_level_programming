/**
 * leet - encodes a string into 1337
 *
 * @str: string input
 *
 * Return: @str
 */

char *leet(char *str)
{
	int i, c = 0;
	int sl[] = {97, 101, 111, 116, 108};
	int ul[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	/*iterate values in array str*/
	while (str[c] != '\0')
	{
		/**
		 * loop through array value five times
		 * to check if the value is equal to
		 * any small letter in array sl or
		 * upper letter in array ul and if it
		 * is replace it with the value in array n
		*/
		for (i = 0; i < 5; i++)
		{
			if (str[c] == sl[i] || str[c] == ul[i])
			{
				str[c] = n[i];
				break;
			}
		}
		c++;
	}
	return (str);
}
