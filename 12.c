#include <stdio.h>


void lermatriz(int n1, int n2, int a[n1][n2]){
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            scanf("%d", &a[i][j]);
        }
    }
}
int main(){
    int a[4][5], soma=0;
    lermatriz(4,5, a);
     for(int i=0; i<4; i++){
        for(int j=0; j<5; j++){
            soma= soma+a[i][j];
        }
    }
    printf("%d", soma);
    return 0;
}