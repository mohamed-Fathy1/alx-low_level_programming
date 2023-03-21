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

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
