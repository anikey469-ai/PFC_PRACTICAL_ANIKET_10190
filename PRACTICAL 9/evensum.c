#include<Stdio.h>
int main(){
    // name:-aniket kumar
    // erp:-10190
    int n,i,s=0;
    printf("enter the size of array:\n");
    scanf("%d",&n);
    printf("Enter the Array Elements \n");
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            s=s+a[i];
        }
    }
    printf("SUM OF EVEN ELEMENT %d",s);
    return 0;
}
// output:-
// enter the size of array:
// 5
// Enter the Array Elements 
// 1 2 3 4 6   
// SUM OF EVEN ELEMENT 12