#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE *fp=fopen("Piramide.txt","w");
    int i,j,N;

    srand(time(NULL));
    printf("Digite o número de linhas da piramide: ");
    scanf("%d",&N);
    for(i=0;i<N;i++){
        for(j=0;j<i+1;j++){
            fprintf(fp,"%d ",rand()%100);
        }
        fprintf(fp,"\n");
    }
    return 0;
}
