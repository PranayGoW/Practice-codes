#include<bits/stdc++.h>
using namespace std;

void mergee(vector<int> &a,int low,int mid,int high);
//merge sort function , recursive funtion
void mergesort(vector<int> &a,int low,int high){
    if(low==high) return; //base case
    int mid=(low+high)/2;
    mergesort(a,low,mid);
    mergesort(a,mid+1,high);
    mergee(a,low,mid,high);
}

//final merge function required, algo
void mergee(vector<int> &a,int low,int mid,int high){
    vector<int> temp;
    int left=low;
    int right=mid+1;
    //initial comparing condition
    while(left<=mid && right<=high){
        if(a[left]<a[right]){
            temp.push_back(a[left]);
            left++;
        }
        else{
            temp.push_back(a[right]);
            right++;
        }
    }
    //if elememts left in left array add them directly as is already sorted
    while(left<=mid){
        temp.push_back(a[left]);
        left++;
    }
    //if elements left in right array add them directly as its already sorted
    while(right<=high){
        temp.push_back(a[right]);
        right++;
    }
    //placing sorted elements in array
    for(int i=low;i<=high;i++){
        a[i]=temp[i-low];
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
    mergesort(a,0,n-1);

    //sorted array
    for(auto it:a){
        cout<<it<<" ";
    }}