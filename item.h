#ifndef _ITEM_H
#define _ITEM_H

typedef int Item;
#define key(A) (A)
#define less(A, B) (key(A) < key(B))
#define exch(A, B) {Item t = A; A = B; B = t;}
#define compexch(A, B) if (less(A, B)) exch(A, B);

extern void sort(Item *a, int lo, int hi);

#endif
