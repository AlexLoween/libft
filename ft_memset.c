//#include "libft.h"
#include<string.h>

void *ft_memset(void *b, int c, size_t len)
{
char *p;

p = (char *)b;
while( len > 0)
    {
        p[len -1] = c;
        len --;

    }
return (b);
}
/*convertimos un puntero void en un puntero char. 
Luego, utilizo un bucle while para recorrer la memoria, 
estableciendo el valor c en cada posición de memoria. 
El bucle se ejecuta mientras la longitud len sea mayor que 0, 
asegurando que se configuren todos los bytes excepto el 
byte nulo al final de la memoria. Finalmente, la función 
devuelve el puntero original b.*/