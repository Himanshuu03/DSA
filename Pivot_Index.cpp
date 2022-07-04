#include<iostream>
using namespace std;
int main(){
    int arr[] ={1,7,3,6,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum =0 ;
    int left_sum = 0;
    for(int i =0 ;i<n;i++){
        sum =sum+arr[i];
    }
    for(int i =0 ;i<n;i++){
        sum =sum-arr[i];
        if(left_sum == sum){
            cout<< i;
        }
        left_sum = left_sum+arr[i];
    }
return 0;
}