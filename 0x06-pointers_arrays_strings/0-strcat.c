#include "main.h"
#include "string.h"
/**
 * _strcat - contactinate two strings
 * @dest: the first string
 * @src: the second string
 * Return: a string that concatenated
 */
char *_strcat(char *dest, char *src)
{
	int trev1, trev2, y;

	trev1 = strlen(dest);
	trev2 = strlen(src);

	for (y = 0; y < trev2 && src[y] != '\0'; y++)
	{
		dest[trev1 + 1] = src[y];
	}
	dest[trev1 + 1] = '\0';
	return (dest);
}
