#include <stdio.h>


void lermatriz(int n, int a[n][n]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
}
int main(){
    int a[3][3], maior, linha, coluna;
    lermatriz(3, a);
    maior = a[0][0];
linha = 0;
coluna = 0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(a[i][j]>maior){
                maior= a[i][j];
                linha=i;
                coluna= j;
            }
        }
    }
    printf("%d %d %d", maior, linha, coluna);
    return 0;
}