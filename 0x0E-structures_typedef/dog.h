#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: A structure in C, named dog that stores some information
 * about any dog, consistingof; the name, age and owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;


#endif