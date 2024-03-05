#include <stdio.h>
#include <stdlib.h>
#include "../data_libs/data_io.c"
#include "../data_libs/data_stat.c"
#include "decision.c"

int main()
{
    double *data;
    int n;

    if (scanf("%d", &n) != 1) {
        printf("n/a");
        return 1;
    } 
    
    data = malloc(n * sizeof(double));
    if (data == NULL) {
        printf("n/a");
        return 1;
    }
    input(data, n);
    
    if (make_decision(data, n))
        printf("YES"); 
    else
        printf("NO");  

    return 0;
}
