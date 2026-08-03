#include <stdio.h>



void lermatriz(int n, int a[n][n]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
}
int somadiagonal(int n, int a[n][n]){
    int soma=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i<j){
                soma=soma+a[i][j];
            }
        }
    }
   return soma;
}
int main(){
    int a[10][10];
    lermatriz(10, a);
    printf("%d", somadiagonal(10, a));

    return 0;
}