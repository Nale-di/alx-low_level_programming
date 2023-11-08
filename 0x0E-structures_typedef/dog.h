#ifndef _DOG_H
#define _DOG_H_

/**
*struct dog -a struct that create a dog info
* 
* @name: the name of the dog
* @age: age of dog
* @owner:the owner of dog
*
* Description: first struct with alx
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};       
void init_dog(struct dog *d, char *name, float age, char *OWNER);
#endif
