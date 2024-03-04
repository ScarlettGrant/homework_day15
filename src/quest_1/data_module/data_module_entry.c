#include <stdio.h>
#include <stdlib.h>
#include "data_libs/data_io.c"
#include "data_libs/data_stat.c"
#include "data_process.c"



int main()
{
    double *data;
    int n;
    if (scanf("%d", &n) == 1) {
        input(&data, n);    

        if (normalization(data, n))
            output(data, n);
        else
            printf("ERROR"); 
    
        free(data); 
    } else {
        printf("n/a");
    }   
    return 0;    
}
