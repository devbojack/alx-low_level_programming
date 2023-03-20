#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
  * new_dog - Structure name
  * @name: dog name parameter
  * @age: age parameter
  * @owner: owner name parameter
  *
  * Return: dog structure or 0
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mbwa;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		mbwa = malloc(sizeof(dog_t));

		if (mbwa == NULL)
			return (0);

		mbwa->name = malloc(sizeof(char) * name_l);

		if (mbwa->name == NULL)
		{
			free(mbwa);
			return (0);
		}

		mbwa->owner = malloc(sizeof(char) * own_l);

		if (mbwa->owner == NULL)
		{
			free(mbwa->name);
			free(mbwa);
			return (0);
		}

		mbwa->name = _strcpy(mbwa->name, name);
		mbwa->owner = _strcpy(mbwa->owner, owner);
		mbwa->age = age;
	}

	return (mbwa);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}

/**
  * _strcpy - Copy a string
  * @dest: Destination value
  * @src: Source value
  *
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
