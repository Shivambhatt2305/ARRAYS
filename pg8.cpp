#include<iostream>
using namespace std;
int Linear_search(int size,int arr[],int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return 0;
}
main(){
    int arr[10]={1,12,23,13,5,6,4,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=4;
    int result=Linear_search(size,arr,key);
    cout<<result;
}
