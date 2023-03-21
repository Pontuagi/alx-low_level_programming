#ifndef _DOG_H_
#define _DOG_H_

struct dog;
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
  * struct dog - short structure
  * @name: first element
  * @age: second element
  * @owner: third element
  */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

#endif /* ifndef _DOG_H_ */
