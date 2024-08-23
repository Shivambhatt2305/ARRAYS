#include<iostream>
using namespace std;
void rotate(int size,int arr[]){
    int temp=arr[size-1];
    for(int i=size;i>=0;i--){
            arr[i]=arr[i-1];
    }
    arr[0]=temp;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    rotate(size,arr);
}
