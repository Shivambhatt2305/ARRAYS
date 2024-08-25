#include<iostream>
using namespace std;
int Max_Subarray(int size,int arr[]){
    int sum=0,count=0,Max=0;
    for(int i=0;i<size;i++){
        sum=0;count=0;
        for(int j=i;j<size;j++){
            sum-=arr[j];
            count++;
            if(sum==0){
                Max=max(Max,count);
            }
        }
    }
    return Max;    
}
main(){
    int arr[8]={6, -2, 2, -8, 1, 7, 4, -10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int r=Max_Subarray(size,arr);
    cout<<r;
}