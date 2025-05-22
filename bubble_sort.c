#include "item.h"

extern void sort(Item *a, int lo, int hi)
{
    for (int i = lo; i < hi - 1; i++) 
        for (int j = i + 1; j < hi; j++) 
            compexch(key(a[j]), key(a[i]));
        
}