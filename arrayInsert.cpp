#include<stdio.h>
int main(){
    int arr[7] = {10,20,30,40,50,70};
    int j,s=5,n=6,item=60;
    j=n;

    while(j>=s){
        arr[j+1] = arr[j];
        j = j-1;
    }


    arr[s]=item;
    n = n+1;
    int i;
    for(i=0;i<n;i++){
        printf("%d \n", arr[i]);
    }
    return 0;
}
