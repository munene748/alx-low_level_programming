#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Calculates the length of a string
 * @s: String to calculate the length of
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}

/**
 * _strcpy - Copies a string from source to destination
 * @dest: Destination buffer
 * @src: Source string
 *
 * Return: Pointer to the destination buffer
 */
char *_strcpy(char *dest, char *src)
{
    int len = 0;
    while (src[len] != '\0')
    {
        len++;
    }

    for (int i = 0; i < len; i++)
    {
        dest[i] = src[i];
    }
    dest[len] = '\0';

    return dest;
}

/**
 * new_dog - Creates a new dog structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog structure (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog;
    int len1 = _strlen(name);
    int len2 = _strlen(owner);

    dog = malloc(sizeof(dog_t));
    if (dog == NULL)
        return NULL;

    dog->name = malloc(sizeof(char) * (len1 + 1));
    if (dog->name == NULL)
    {
        free(dog);
        return NULL;
    }
    dog->owner = malloc(sizeof(char) * (len2 + 1));
    if (dog->owner == NULL)
    {
        free(dog->name);
        free(dog);
        return NULL;
    }
    _strcpy(dog->name, name);
    _strcpy(dog->owner, owner);
    dog->age = age;

    return dog;
}

