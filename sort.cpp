#include<bits/stdc++.h>
using namespace std;

//selection sort
void selectsort(int a[],int n){
    for(int i=0;i<=n-2;i++){
        int min=i;
        for(int j=i;j<=(n-1);j++){
            if(a[j]<a[min]) min=j;
        }
        //swapping
        int temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }
}

//bubble sort
void bubblesort(int a[],int n){
    for(int i=n-1;i>=1;i--){
        int didSwap=0;
        for(int j=0;j<=i-1;j++){
            if(a[j]>a[j+1]){
                //swapping
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                didSwap=1;
            }}
        if(didSwap==0) break;
    }
}

//recursive bubble sort
void rbsort(int a[],int n){
    if(n==1) return;
    int didswap=0; //tweak to reduce time complexity for some cases
    for(int j=0;j<=n-2;j++){
        if(a[j]>a[j+1]){
        swap(a[j],a[j+1]);
        didswap=1;
        }
    }
    if (didswap==0) return;
    rbsort(a,n-1); // recursion call for next round
}

//insertion sort
void insertionsort(int a[],int n){
    for(int i=0;i<n-1;i++){
        int j=i;
        while(j>0 && a[j-1]>a[j]){
            //swapping
            int temp=a[j-1];
            a[j-1]=a[j];
            a[j]=temp;
            j--;
        }
    }
}

//recursive insertion sort
void rinsort(int a[],int i,int n){
    if(i==n) return;
    int j=i;
    while(j>0 && a[j-1]>a[j]){
        swap(a[j-1],a[j]);
        j--;
    }
    rinsort(a,i+1,n);
}

//mainnn
int main(){
    //array input
    int n;
    cout<<"N: ";cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //function for selection osrt
    rinsort(a,0,n);

    //sorted array
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }}
