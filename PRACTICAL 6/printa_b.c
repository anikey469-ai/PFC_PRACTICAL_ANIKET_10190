#include<stdio.h>
int main(){
    //name-aniket kumar
    //erp:-10190
    int a,b,i;
    printf("enter the two limits:");
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++){
        printf("%d\t",i);
    }
    return 0;
}
// output:-
// enter the two limits:10 15
// 10      11      12      13      14      15