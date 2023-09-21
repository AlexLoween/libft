#include<stdio.h>
// esta funcion nos dice si le pasamos un caracter mediante un variable, 
//nos dice si es una letra del alphabeto.
int ft_isalpha (int c)
{
    if( c >= 'A' && c <= 'Z' || c >= 'A' && c <= 'z' )
        return (1);
    else 
        return (0); 
}
/*int main (void)
{
    char c = 'D';

    if (ft_isalpha(c))
        printf("%c la letra es alfabetica \n", c );
    else {
        printf("%c la letra no es alfabetica \n", c );
        }
}*/