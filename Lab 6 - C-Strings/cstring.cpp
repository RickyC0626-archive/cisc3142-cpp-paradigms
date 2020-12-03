#include <stdio.h>

#include "cstring.h"

char *mystring::strcpy(char *dest, const char *src)
{
    char *dp = dest;
    // Copy each character from source to destination
    while(*dest++ = *src++);
    return dp;
}

char *mystring::strcat(char *dest, const char *src)
{
    // Point to end of destination string
    char *dp = dest + strlen(dest);

    // Append characters from source to destination string
    while(*dp++ = *src++);

    // Null terminate destination string
    *dp = '\0';

    // Return destination
    return dest;
}

int mystring::strcmp(const char *str1, const char *str2)
{
    while(*str1 && *str1 == *str2)
    {
        // Move to next pair of characters
        ++str1;
        ++str2;
    }
    // Return ASCII difference after converting char* to unsigned char*
    int diff = (int)(unsigned char)(*str1) - (int)(unsigned char)(*str2);
    // Represent difference as either -1, 0, or 1
    return (diff < 0) ? -1 : ((diff > 0) ? 1 : 0);
}

char *mystring::strchr(char *str, int c)
{
    while(*str++)
    {
        if(*str == c) return (char*)str;
    }
    return NULL;
}

char *mystring::strrchr(char *str, int c)
{
    char *found, *p;
    c = (unsigned char) c;

    if(c == '\0') return strchr(str, '\0');
    found = NULL;

    while((p = strchr(str, c)) != NULL)
    {
        found = p;
        str = p + 1;
    }
    return (char*) found;
}

int mystring::strlen(const char *str)
{
    const char *sp = str;
    while(*sp++);
    return sp - str - 1;
}