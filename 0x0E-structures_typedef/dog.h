#ifndef DOG_H
#define DOG_H

/**
* dog_t - new typedef for the type struct dog
*/
typedef struct dog dog_t;

/**
* struct dog - type struct for dogs
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};


#endif /* DOG_H */
