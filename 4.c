#include <stdio.h>


void lermatriz(int f, int a[f][f]){
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            scanf("%d", &a[i][j]);
        }
    }
}
void verificardiagonalacima( int f, int a[f][f]){
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if(i<j){
                printf("%d", a[i][j]);
            }
        }
    }
}
int main(){
    int a[10][10];
    lermatriz(10, a);
    verificardiagonalacima(10, a);
    
    return 0;
}