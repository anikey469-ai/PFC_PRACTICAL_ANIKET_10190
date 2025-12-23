#include<stdio.h>
int main(){
    // name:-aniket kumar
    // erp:-10190
    int i,j;
    char ch='A';
    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}
// output:-
// A 
// B C     
// D E F   
// G H I J 