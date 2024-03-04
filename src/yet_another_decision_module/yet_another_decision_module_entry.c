#include <stdio.h>
#include <stdlib.h>
#include "data_libs/data_io.c"
#include "data_libs/data_stat.c"
#include "decision.c"

void main()
{
    double *data;
    int n;

    if (scanf("%d", &n) == 1) {
        input(&data, n);

        if (make_decision(data, n))
            printf("YES"); 
        else
            printf("NO"); 
        free(data);
    } else {
        printf("n/a");
    }
}
