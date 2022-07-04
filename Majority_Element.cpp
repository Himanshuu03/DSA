#include<iostream>
using namespace std;
int main(){
    int arr[] ={2,2,1,1,1,2,2};
    int first =arr[0];
    int n =sizeof(arr)/sizeof(arr[0]);
    int count = 1;
    for(int i= 1;i<n;i++){
        if(first==arr[i]){
            count++;
        }
        else{
            count--;
            if(count == 0){
                first = arr[i];
                count = 1;
            }
        }
    }
    cout<<first;
return 0;
}
