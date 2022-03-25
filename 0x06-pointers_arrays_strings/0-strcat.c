#include "main.h"
char *_strcat(char *dest, char *src){
	int i, n;

	while (dest[i])
	{
		i++;
	}
	
	for (n=0; src[n] != 0; i++)
	{
		dest[i] = src[n];
		i++
	}

	dest[i] = '\0';
	return (dest);
}
