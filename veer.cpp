
// insertion sort algorithm and implementation and selection sort
#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"Enter the number of elements in array : ";
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cout<<"Enter the elements at index "<<i<<" : ";
    //     cin>>arr[i];
    // }




    // // using swapping
    int arr[8]={6,2,1,8,4,0,7,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    // // insertion algorithm
    // for(int i=1;i<n;i++){
       
    //         for(int j=i;j>0;j--){
    //             if(arr[j-1]>arr[j]){
    //                 swap(arr[j-1],arr[j]);
    //             }

    //         }


    // }


//using shifting

    // for(int i=1;i<n;i++){

    //     int key=arr[i];
  
    //    for(int j=i-1;j>=0;j--){
    //     if(arr[j]>key){
    //     arr[j+1]=arr[j];
    //     arr[j]=key;
    //     }
    //    }
    // }
       


    // selection sort

    for(int i=0;i<n-1;i++){
        int index=i;
        for(int j=i+1;j<n;j++){
            if(arr[index]>arr[j]){
                index=j;
            }
        }
        swap(arr[i],arr[index]);
    }











    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}