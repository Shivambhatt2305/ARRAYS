#include<iostream>
using namespace std;
void missing(int arr[],int size){
    int i,j,miss,temp2,temp1,twice;
    for(i=0;i<size;i++){
        temp1=arr[i];
        for(j=i+1;j<size;j++){
            if(temp1==arr[j]){
                twice=temp1;
            }
        }
    }
    cout<<"Twice: "<<twice<<endl;
    temp2=1;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            if(arr[j]==temp2){
                temp2++;
            }else{
                miss=temp2;
            }
        }
    }
    cout<<"Missing: "<<miss;
}
main(){
    int arr[5]={2,1,2,5,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    missing(arr,size);
}