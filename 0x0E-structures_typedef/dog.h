#ifndef DOG_MOD_H
#define DOG_MOD_H

struct dog_mod
{
    char *name;
    float age;
    char *owner;
};

typedef struct dog_mod dog_mod_t;

void init_dog_mod(struct dog_mod *d, char *name, float age, char *owner);
void print_dog_mod(struct dog_mod *d);
dog_mod_t *new_dog_mod(char *name, float age, char *owner);
void free_dog_mod(dog_mod_t *d);
char *_strcpy_mod(char *dest, char *src);
int _strlen_mod(char *s);

#endif

