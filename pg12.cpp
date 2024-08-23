 #include<iostream>
using namespace std;
int One_Twice(int size,int arr[]){
    int count=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
        if(arr[i]==arr[j]){
            count--;
        }
        }
        if(count==1){
            return arr[i];
        }
        count=2;
    }   
    return 0;
}

main(){
    int arr[9]={1,1,2,2,3,3,4,5,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int r=One_Twice(size,arr);
    cout<<r;
}
