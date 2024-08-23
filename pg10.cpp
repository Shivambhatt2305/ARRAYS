#include<iostream>
using namespace std;
int Missing(int size,int arr[]){
    for(int i=0;i<size-1;i++){
        if(arr[i+1]-arr[i]!=1){
            return (arr[i+1]-1);
        }
    }
    return 0;
}
main(){
    int arr[9]={1,2,3,4,5,6,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int result=Missing(size,arr);
    cout<<result;
}
