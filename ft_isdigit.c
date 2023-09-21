#include<stdio.h>
//esta funcion nos dice si al pasarle una variable tipo int se trata de un 
//caracter de tipo numerico
int ft_isdigit (int c)
{
if( c >= '0' || c <= '9')
    return (1);
else
    return (0);
}

/*int main (void)
{
int c;
c = 7;

    if (ft_isdigit(c))
    {
        printf("%d es digito numerico \n", c);
    }
    else 
    printf("%d no es un digito numerico\n", c);
}*/