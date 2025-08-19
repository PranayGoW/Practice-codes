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
    insertionsort(a,n);

    //sorted array
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }}
