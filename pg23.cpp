#include<iostream>
using namespace std;
int* Leader(int size,int arr[],int &k){
    int i,j;
    bool leader=true;
    static int result[5];
    for(i=0;i<size;i++){
        leader=true;
        for(j=i;j<size;j++){
            if(arr[j]>arr[i]){
                leader=false;
            }
        }
        if(leader==true){
            result[k]=arr[i];
            k++;
        }
    }
    return result;
}
main(){
    int arr[6]={10, 22, 12, 3, 0, 6};
    int size=sizeof(arr)/sizeof(arr[0]);
    int k=0;
    int* R=Leader(size,arr,k);
    for(int i=0;i<k;i++){
        cout<<R[i]<<" ";
    }
}
