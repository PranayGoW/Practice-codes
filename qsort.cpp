#include<bits/stdc++.h>
using namespace std;

//algorithm to place pivot in its correct place initially
int partn(vector<int> &a,int low,int high){
    int pivot=a[low];
    int i=low;
    int j=high;
    while(i<j){
        //if the element at i pointer is less than or equal to pivot, then only i increases, otherwise stays same
        while(a[i]<=pivot && i<=high-1){
            i++;
        }
        //if elemt at j pointer is greater than pivot , then only j decreases, otherwise remains same
        while(a[j]>pivot && j>=low+1){
            j--;
        }
        //if after both the above while loops i < j then swap elemts at i and j pointer
        if(i<j) swap(a[i],a[j]);
    }
    //at the end of whole while loop we put pivot elemt to its accurate place
    swap(a[low],a[j]);
    return j;
}


//main quick sort algorithm
void qsort(vector<int> &a,int low,int high){
    if(low<high){
        int pIndex=partn(a,low,high); //find index of pivot
        qsort(a,low,pIndex-1); //sort left of pivot
        qsort(a,pIndex+1,high); //sort right half of pivot
    }
}

//mainnn
int main(){
    //array input
    int n,k;
    vector<int> a;
    cout<<"N: ";cin>>n;
    for(int i=0;i<n;i++){
        cin>>k;
        a.push_back(k);
    }
    //function for selection osrt
    qsort(a,0,n-1);

    //sorted array
    for(auto it:a){
        cout<<it<<" ";
    }}