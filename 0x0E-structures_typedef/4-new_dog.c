#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
* _strlen - returns the length of a string
* @s: string whose length is being determined
* Return: length of string
*/

int _strlen(char *s)
{
	int slen = 0;

	while (s[slen] != '\0')
	{
		slen++;
	}
	return (slen);
}

/**
**_strcpy - copies the string pointed to by src, including the terminating
* null byte (\0), to the buffer pointed to by dest
* @dest: buffer storing copy of string
* @src: string at source
* Return: pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = ('\0');

	return (dest);
}

/**
* new_dog - function that creates a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: new struct dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bosco;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}

	bosco = malloc(sizeof(dog_t));
	if (bosco == NULL)
	{
		return (NULL);
	}

	bosco->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (bosco->name == NULL)
	{
		free(bosco);
		return (NULL);
	}

	bosco->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (bosco->owner == NULL)
	{
		free(bosco->name);
		free(bosco);
		return (NULL);
	}

	bosco->name = _strcpy(bosco->name, name);
	bosco->age = age;
	bosco->owner = _strcpy(bosco->owner, owner);

	return (bosco);
}
