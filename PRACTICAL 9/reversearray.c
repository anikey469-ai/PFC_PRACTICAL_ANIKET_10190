#include<stdio.h>
// name:-aniket kumar
// erp:-10190
void reverse(int a[],int n){
    int start=0;
    int end=n-1;
    int temp;
    while(start<end){
        temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start ++;
        end --;
    }
}
int main(){
        int n,i;
        printf("enter the size of array \n");
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        printf("Original Array \n");
        for(i=0;i<n;i++){
            printf("%d ",a[i]);
        }
        printf("\n");
        reverse(a,n);
        printf("Reversed Array:\n");
        for(i=0;i<n;i++){
            printf("%d ",a[i]);
        }
        return 0;
    }

// output:-
// enter the size of array 
// 5 
// 1 2 3 4 5
// Original Array 
// 1
// 2
// 3
// 4
// 5
// Reversed Array:
// 5 4 3 2 1      