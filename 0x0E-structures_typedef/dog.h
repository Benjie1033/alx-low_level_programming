# ifndef DOG_H
# define DOG_H

# include <stdlib.h>
# include <stdio.h>

/**
 * struct dog - structure type of the dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog by name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
char *_cpy(char *dest, char *src);
int _len(char *s);

# endif
