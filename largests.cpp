#include<iostream>
using namespace std;
int main(){
    int arr[] ={1,2,3,4,5,6,7,8,9};
    int n =sizeof(arr)/sizeof(arr[0]);
    int largest =0 ;
    int second =0;
    for(int i =0;i<n;i++){
        if(arr[i]>arr[largest]){
            second =largest;
            largest =i ;
        }
        else if(arr[i]>arr[second]){
            second = i;
        }
    }
cout<<"Largest Element in array "<<arr[largest]<<" "<<"Second Largest Element in array "<<arr[second];
return 0;
}