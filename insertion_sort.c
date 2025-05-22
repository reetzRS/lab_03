#include "item.h"

extern void sort(Item *a, int lo, int hi)
{
    for (int i = lo + 1; i < hi; i++) 
        for (int j = i; (j > 1 && less(key(a[j]), key(a[j - 1]))) ; j--) 
            exch(key(a[j]), key(a[j - 1]));

}