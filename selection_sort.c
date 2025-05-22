#include "item.h"

extern void sort(Item *a, int lo, int hi)
{
    for (int i = lo; i < hi - 1; i++) {
        Item menor = key(a[i]); 
        for (int j = i + 1; j < hi; j++) {
            if (less(key(a[j]), key(a[menor])))
                menor = key(a[j]);
        }
        key(a[i]) = menor;
    }
}
