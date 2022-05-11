#include <stdio.h>
#include <stdlib.h>
int main (void) {
    int aux, i, n, j, *pvetor;
    scanf("%d", &n);
    
    pvetor = (int*) malloc(n*sizeof(int));
    if ( !pvetor ){
        puts ("Sem memoria.");
        return 1;
    }

    for ( i = 0; i < n; i++ ){
        scanf("%d", (pvetor+1));
    }

    for ( i = 0; i < n-1; i++ ){
        for (j = i+1; j < n; j++){
            if (pvetor [i] > pvetor[j]){
                aux = pvetor[i];
                pvetor[i] = pvetor[j];
                pvetor[j] = aux;
            }
        }
    }
    
    for (i = 0; i < n; i++ ) {
        printf("%d\t", pvetor[i]);
    }
    free (pvetor);
    return 0;
}

