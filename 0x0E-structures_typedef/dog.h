#ifndef _DOG_H_
#define _DOG_H_

struct dog;
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
  * struct dog - short structure
  * @name: first element
  * @age: second element
  * @owner: third element
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* ifndef _DOG_H_ */
