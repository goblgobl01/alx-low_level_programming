#ifndef YOUR_HEADER_FILE_NAME_H
#define YOUR_HEADER_FILE_NAME_H

/**
 * struct dog - this a struture of a dog information
 * @age: the age of the dog
 * @owner: the name of the owner
 * @name: string of the name of the dog
 *
 * Description: this is the description
 */
struct dog
{
char *name;
char *owner;
float age;
};
typedef struct dog dog;
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
