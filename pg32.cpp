#include<iostream>
using namespace std;
void target_sum(int arr[],int size,int target){
    int i,j,k,l;
    int a=0;
    int result1[5];
    int result2[5];
    int result3[5];
    int result4[5];
    for(i=0;i<size-3;i++){
        for(j=i+1;j<size-2;j++){
            for(k=j+1;k<size-1;k++){
                for(l=k+1;l<size;l++){
                    if(arr[i]+arr[j]+arr[k]+arr[l]==target){
                        result1[a]=arr[i];
                        result2[a]=arr[j];
                        result3[a]=arr[k];
                        result4[a]=arr[l];
                        a++;
                    }
                }
            }
        }
    }
    for(i=0;i<a;i++){
        cout<<result1[i]<<" ";
        cout<<result2[i]<<" ";
        cout<<result3[i]<<" ";
        cout<<result4[i]<<" "<<endl;
    }
}
main(){
    int arr[6]={1,0,-1,0,-2,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=0;
    target_sum(arr,size,target);
}
