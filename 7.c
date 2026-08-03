#include <stdio.h>



int produtoabaixo(int n, int a[n][n]){
    int produto=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
           if(i>j){
            produto= a[i][j]*produto;
           }
        }
    }
    return produto;
}
void lermatriz(int n, int a[n][n]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
}
int main(){
    int a[10][10];
    lermatriz(10, a);
    printf("%d", produtoabaixo(10, a));
    return 0;
}