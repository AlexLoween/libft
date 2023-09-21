#include<stdio.h>
#include<string.h>

void ft_bzero(void *s, size_t n)
{
 ft_memset(s, 0, n);
}

int main() {
    char myString[] = "Hello, World!";
    size_t len = sizeof(myString) - 1; // Restamos 1 para excluir el carácter nulo '\0'
    
    printf("Antes de bzero: %s\n", myString);
    
    ft_bzero(myString, len);
    
    printf("Después de bzero: %s\n", myString);
    
    return 0;
}




