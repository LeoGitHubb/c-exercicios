#include <stdlib.h>
#include <stdio.h>
int main (void){
    int *num; 
    int n = 0;
 
    while (1){
        num = malloc(n);
        if(num == NULL){
            n = n - 10000;
            num = malloc(n);
            printf("%d bytes", n);
            free(num);
            return 0;
        }
        n += 10000;
        free(num);
    }
}