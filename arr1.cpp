#include<bits/stdc++.h>
using namespace std;

//largest elemt in array
void largest(int a[],int n){
    int largest=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>largest){
            largest=a[i];
        }
    }
    cout<<"largest element is "<<largest<<endl;
}
//second largest elemt of array
void slargest(int a[],int n){
    int slargest=INT_MIN;
    int largest=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>largest){
            slargest=largest;
            largest=a[i];
        }
        else if(a[i]<largest && a[i]>slargest){
            slargest=a[i];
        }
    }
    cout<<"2nd largest elemt is: "<<slargest<<endl;
}
//second smallest elemt and smallest element
void ssmall(int a[],int n){
    int smallest=a[0];
    int ssmall=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<smallest){
            ssmall=smallest;
            smallest=a[i];
        }
        else if(a[i]>smallest && a[i]<ssmall){
            ssmall=a[i];
        }
    }
    cout<<"smallest element: "<<smallest<<endl;
    cout<<"2nd smallest element: "<<ssmall<<endl;
}
//check if an array is sorted or not return 1 for true and 0 for false
bool chksort(int a[], int n){
    for(int i=1;i<n;i++){
        if(a[i]>=a[i-1]){

        }
        else return false;
    }
    return true;
}

//remove duplicates from a sorted array and tells number of unique elements
int rmdup(int a[],int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(a[i]!=a[j]){
            a[i+1]=a[j];
            i++;
        }
    }
    return i+1;
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
    //print largst element in array
    largest(a,n);
    slargest(a,n);
    ssmall(a,n);
    cout<<chksort(a,n)<<endl;
    cout<<"no. of unique elmts: "<<rmdup(a,n)<<endl;
    }
