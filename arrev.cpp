#include<bits/stdc++.h>
using namespace std;

//to reverse an array
void reva(int i,int arr[],int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    reva(i+1,arr,n);
}

//main 
int main(){
    int n;
    cout<<"N : "; cin>>n;
    int a[n]; //a[n] here n should be initialized before you build the array, to initialize array afer taking n as input//
    for(int i=0;i<n;i++){
        cout<<"enter "<<i<<"th element:";
        cin>>a[i];
    }
    reva(0,a,n);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}