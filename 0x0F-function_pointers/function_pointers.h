#ifndef Function_pointers_H
#define Function_pointers_H
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));


#endif
