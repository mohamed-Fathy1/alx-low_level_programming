#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
* new_dog - creates a new dog
	 * @name: name of the dog
	 * @age: age of the dog
	 * @owner: owner of the dog
	 *
	 * Return: pointer to the new dog (Success), NULL otherwise
	 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	unsigned int len1 = strlen(name);
	unsigned int len2 = strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char *) * len1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char *) * len2);
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	strcpy(dog->name, name);
	dog->age = age;
	strcpy(dog->owner, owner);

	return (dog);
}
