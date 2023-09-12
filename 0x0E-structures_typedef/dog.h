#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog basic info
 * @name: first inout
 * @age: 2nd input
 * @owner: 3rd input
*/

struct dog
{
	/* data */
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
