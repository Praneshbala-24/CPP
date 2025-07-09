#include<iostream>
using namespace std;
int maxSum(int arr[], int n, int window_size){
    if(n<window_size){
        cout<<"Invalid window_size";
        return -1;}
    //calculate sum of first window w1: 1+2+3
    int window_sum=0;
    for(int i=0;i<window_size;i++){
        window_sum+=arr[i];//1 +2 +3 =6 
    }int max_sum=window_sum;//6 
    //slide window 
    for(int i=window_size;i<n;i++){
        window_sum+=arr[i]-arr[i-window_size];
        max_sum=max(max_sum, window_sum);}
    return max_sum;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int window_size;cin>>window_size;//3 
    int n=sizeof(arr)/sizeof(arr[0]);//10
    cout<<"Max Window sum"<<maxSum(arr, n, window_size);
}
