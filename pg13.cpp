 #include<iostream>
using namespace std;
int Sub_array(int size,int arr[],int key){
    int length=0;
    int i=0,j,sum;
    for(int i=0;i<size;i++){
        sum=0;
        for(j=i;j<size;j++){
            sum+=arr[j];
            if(sum==key){
                length=max(length,j-i+1);
            }
        }
    }
    return length;
}
main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=15;
    int result= Sub_array(size,arr,key);
    cout<<result;
}
