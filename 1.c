#include <stdio.h>


void lermatriz(int f, int a[f][f]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &a[i][j]);
        }
    }
}
void verificardiagonal( int f, int a[f][f]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(i==j){
                printf("%d", a[i][j]);
            }
        }
    }
}
int main(){
    int a[3][3];
    lermatriz(3, a);
    verificardiagonal(3, a);
    
    return 0;
}