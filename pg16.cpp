 #include<iostream>
using namespace std;
int shortarray(int size,int arr[]){
    int i,c0=0,c1=0,c2=0;
    for(i=0;i<size;i++){
        if(arr[i]==0){
            c0++;
        }
        else if(arr[i]==1){
            c1++;
        }
        else{
            c2++;
        }
    }
    for(i=0;i<c0;i++){
        arr[i]=0;
    }
    for(i=c0;i<c0+c1;i++){
        arr[i]=1;
    }
    for(i=c0+c1;i<size;i++){
        arr[i]=2;
    }
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
main(){
    int arr[10]={0,1,2,0,1,2,0,1,2,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    shortarray(size,arr);
}
