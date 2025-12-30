#include<stdio.h>
int main(){
    // name:-aniket kumar
    // erp:-10190
    int n,i,max=0,min=9;
    printf("enter the size of array:\n");
    scanf("%d",&n);
    printf("enter elements:\n");
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("Largest Element: %d\n",max);
    printf("Smallest Element: %d\n",min);
    return 0;
}
// output:-
// enter the size of array:
// 5
// enter elements:
// 1 2 3 4 5
// Largest Element: 5 
// Smallest Element: 1