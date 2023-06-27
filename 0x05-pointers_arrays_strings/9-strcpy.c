# include "main.h"

/**
 *_strcpy - Function that prints the string pointed to src
 *@dest: destination
 *@src: source
 *Return: 0
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
int n = 0;

while (*(src + i) != '\0')
{
i++;
}
for (; n < i; n++)
{
dest[n] = src[n];
}
dest[i] = '\0';
return (dest);
}

