#include<iostream>
using namespace std;
int* Rearrange(int size,int arr[]){
    static int result[10];
    int i,j=0,k=1;
    for(i=0;i<size;i++){
        if(arr[i]>0){
            result[j]=arr[i];
            j+=2;
        }
        else{
            result[k]=arr[i];
            k+=2;
        }
    }
    return result;
}
main(){
    int arr[6]={1,2,-3,-1,-2,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int* answer=Rearrange(size,arr);
    for(int i=0;i<size;i++){
        cout<<answer[i]<<" ";
    }
}
