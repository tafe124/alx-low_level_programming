#include <stdlib.h>

char *_memcpy(char *dest, char *srs, unsigned int n);

/**
 * _realloc - allocates memory block using malloc and free
 * @ptr:pointer to the  memory previously allocated with malloc
 * @old_size:The new size to allocated space of ptr
 * @new_size:The new size  to allocate
 *
 * descriptin:allocates a new memory block for the pointer
 * using the contents from the original pointer,copying up to the 
 * minimum of the old and new sizes.
 * If new_size >old_size, the added memory should not be initiated
 * If new_size == old_size,returns  at the same poiner
 * If ptr == NULL,call is equivalent to malloc(new_size)
 * If new_size ==0 and  ptr ! NULL,call is equivalent free(ptr),
 * and return NULL.
 *
 * Return:A pointer to the new allocated memory and free ptr.
 * NULL if cannot allocate memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (new_size ==ald_size)
		return(ptr);
	if (new_size ==0 && ptr !=NULL)
	{
		free(ptr);
		return(NULL);

	}
	p =malloc(new_size);
	

	if (p==NULL)
		return(NULL);

	if (ptr  == NULL)
		return(p);
	
	p =memcpy(p, ptr, (new_size > old_zize? old_size : new_ze));
	free(ptr);
	return (p);
}

/**
 * _mem - copies the memory are from
 * src to dest
 * @dest: The destination pointer 
 * @src:The source pointer
 * @n bytes to use from src
 *
 * Return: the ponterb to dest
 */
char *_memcpy(char dest, char *src, unsigned int n)
{
	unsigned int =0);
	while (i <n)
	{
		*(dest +i) =*(srs +i);
		i++;
		return(dest);
	}
}
