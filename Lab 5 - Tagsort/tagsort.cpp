#include "tagsort.h"

void swap(int *&xp, int *&yp)
{
    int *temp = xp;
    xp = yp;
    yp = temp;
}

void sort(int *ap[], int size)
{
    for(int i = 0; i < size; i++)
    {
        int smallest = i;

        for(int j = i + 1; j < size; j++)
        {
            if(*(ap[j]) < *(ap[smallest])) smallest = j;
        }
        swap(ap[i], ap[smallest]);
    }
}