#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];
        
        int sum=0;
        for(int i=0; i<n;i++){
            scanf("%d",&n);
           sum+=arr[i]; }
           printf("%d\n",sum);
        int  avg;
        int c=0;
        avg=sum/n;
        printf("%d\n",avg);
        for(int i=0;i<n;i++){
            if(arr[i]>avg){
                c=c+1;
            }
        } 
        printf("%d\n",c);  

    }
    return 0;
}
