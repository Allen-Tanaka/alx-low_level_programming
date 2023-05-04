#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - fn that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
   unsigned int n, j, i;
   dog_t *dog;


   if (name == NULL || owner == NULL)
       return (NULL);
   dog = malloc(sizeof(dog_t));
   if (dog == NULL)
       return (NULL);
   for (n = 0; name[n]; n++)
       ;
   n++;
   dog->name = malloc(n * sizeof(char));
   if (dog->name == NULL)
   {
       free(dog);
       return (NULL);
   }
   for (i = 0; i < n; i++)
       dog->name[i] = name[i];
   dog->age = age;
   for (j = 0; owner[j]; j++)
       ;
   j++;
   dog->owner = malloc(j * sizeof(char));
   if (dog->owner == NULL)
   {
       free(dog->name);
       free(dog);
       return (NULL);
   }
   for (i = 0; i < j; i++)
       dog->owner[i] = owner[i];
   return (dog);
}

