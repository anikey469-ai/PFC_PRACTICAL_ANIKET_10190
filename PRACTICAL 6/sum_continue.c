#include<stdio.h>
int main(){
    // name-aniket kumar
    // erp-10190
    int n,i,s=0;
    printf("ENTER THE LAST LIMIT:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2!=0){
            continue;
        }
        else{
            s=s+i;
        }
    }
    printf("SUM IS %d",s);
    return 0;
}
// output:
// ENTER THE LAST LIMIT:10
// SUM IS 30