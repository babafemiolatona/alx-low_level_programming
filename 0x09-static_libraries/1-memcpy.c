/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 *
 * @dest: pointer to the destination memory area
 * @src: pointer to the source memory area
 * @n: the number of bytes to be copied
 *
 * Return: a pointer to the destination memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_ptr = dest;
	char *src_ptr = src;

	while (n--)
	{
		*dest_ptr++ = *src_ptr++;
	}

	return (dest);
}
