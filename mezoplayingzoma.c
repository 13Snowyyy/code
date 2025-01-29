#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char str[n];
    scanf("%s",str);
    int R=0;
    int L=0;
    for(int i=0;i<n;i++){
        if(str[i]=="L"){
            R=R+1;

        }
        else{
            L=L+1;
        }
    }
    printf("%d",R+L+1);
    return 0;
}