#include <stdio.h>


void lermatriz(int n, int a[n][n]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
}
void abaixodiagonal(int n, int a[n][n]){
     for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
           if(i>j){
            printf("%d", a[i][j]);
           }
        }
    }
}
int main(){
    int a[10][10];
    lermatriz(10, a);
    abaixodiagonal(10, a);
    return 0;
}