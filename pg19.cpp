 #include<iostream>
using namespace std;
int Max_Subarray(int size,int arr[],int &s,int &e){
    int i,j,maximum=0,sum=0;
    for(i=0;i<size;i++){
        sum=0;
        for(j=i;j<size;j++){
            sum+=arr[j];
            if(sum>maximum){
                maximum=sum;
                s=i;e=j;
            }
        }
    }
    return maximum;
}
main(){
    int arr[9]={-2,1,-3,4,-1,2,1,-5,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    int s,e;
    int R=Max_Subarray(size,arr,s,e);
    cout<<R<<endl;
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }
}
