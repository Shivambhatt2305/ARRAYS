#include<iostream>
using namespace std;
void sum_zero(int arr[],int size){
    int i,j,k,m=0;
    int result1[5];
    int result2[5];
    int result3[5];
    for(i=0;i<size-2;i++){
        for(j=i+1;j<size-1;j++){
            for(k=j+1;k<size;k++){
                if(i!=j&&j!=k){
                    if(arr[i]+arr[j]+arr[k]==0){
                        result1[m]=arr[i];
                        result2[m]=arr[j];
                        result3[m]=arr[k];
                        m++;
                    }
                }
            }
        }
    }
    for(i=0;i<m;i++){
    cout<<result1[i]<<" ";
    cout<<result2[i]<<" ";
    cout<<result3[i]<<" "<<endl;
    }
}
main(){
    int arr[4]={-1,0,1,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    sum_zero(arr,size);
}