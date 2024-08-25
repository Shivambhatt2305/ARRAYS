#include<iostream>
using namespace std;
int Max_Multiplication(int size,int arr[]){
    int product=1,count=0,Max=0;
    for(int i=0;i<size;i++){
        product=1;count=0;
        for(int j=i;j<size;j++){
            product*=arr[j];
            count++;
            if(product>Max){
                Max=product;
            }
        }
    }
    return Max;
}
main(){
    int arr[6]={1,2,-3,0,-4,-5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int r=Max_Multiplication(size,arr);
    cout<<r;
}
