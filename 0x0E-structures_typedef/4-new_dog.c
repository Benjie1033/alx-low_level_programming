# include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns length of a string
 * @s: string
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int z;

	z = 0;

	while (s[z] != '\0')
	{
		z++;
	}

	return (z);
}

/**
 * *_strcopy - copies the string pointed to and null bit
 *
 * @dest: destin of the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */

char *_strcopy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a  dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	dog->name = _strcopy(dog->name, name);
	dog->owner = _strcopy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
