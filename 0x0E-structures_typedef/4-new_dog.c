#include "dog.h"

/**
 * _strcpy - copies a string from a src to destination
 * @dest: pointer to destination
 * @src: pointer to src
 * Return: pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	unsigned int x;

	x = 0;
	while (src[x])
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: pointer to name of dog
 * @age: age
 * @owner: owner of dog
 * Return: pointer to new dog variable
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	_strcpy(dog->name, name);
	dog->age = age;
	_strcpy(dog->owner, owner);

	return (dog);
}
