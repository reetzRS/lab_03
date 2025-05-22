#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "item.h"

extern void sort(Item *a, int lo, int hi);

int main(int argc, char *argv[])
{
    int N = atoi(argv[1]);

    int *a = (int *)malloc(N * sizeof(int));

    for (int i = 0; i < N; i++)
        scanf("%d", &key(a[i]));

    clock_t start, stop;
    start = clock();
    // Executa o algoritmo de ordenação
    sort(a, 0, N);

    stop = clock();
    double time_taken = ((double) stop - start);
    for (int i = 0; i < N; i++)
        printf("%d\n", key(a[i]));

    printf ("Elapsed time: %.3fms\n", time_taken);
    printf("In seconds: %.0fs\n", 1000 * time_taken);

    free(a);

    return 0;
}
