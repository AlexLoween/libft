#include<string.h>

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    size_t c;
    char *d;
    char *s;

    c = 0;
    d = (char *)dst;
    s = (char *)src;

    while(c < n)
    {
        d[c] = s[c];
        c++;
    }
return(dst);
}