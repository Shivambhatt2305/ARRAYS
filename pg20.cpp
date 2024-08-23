     #include<iostream>
    using namespace std;
    int Profit(int size,int arr[]){
        int i,j,p,mp=0;
        for(i=0;i<size;i++){
            p=0;
            for(j=i;j<size;j++){
                if(arr[j]>arr[i]){
                p=arr[j]-arr[i];
                if(p>mp){
                    mp=p;
                }
            }
            }
        }
        return mp;
    }
    main(){
        int arr[6]={7,1,5,3,6,4};
        int size=sizeof(arr)/sizeof(arr[0]);
        int R=Profit(size,arr);
        cout<<R;
    }
