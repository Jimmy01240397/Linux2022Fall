#include "../include/strcpy.h"

char *sstrcpy(char *dest, const char *src) 
{
    int i;
    for(i = 0; src[i]; i++)
        dest[i] = src[i];
    dest[i] = 0;
    return dest;
}