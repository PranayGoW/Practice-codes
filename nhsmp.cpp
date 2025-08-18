#include<bits/stdc++.h>
using namespace std;

int main(){
    //array input
    int n;
    cout<<"arr size; ";cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //hash using map  // unordered map provides constant TC and is preferred over map as in map data is stored in sorted order.
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[a[i]]++; 
    }

    //visualizing the map, it stores data in ordered manner
    for(auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    
    //query part
    int q;
    cout<<"no. of qry: ";cin>>q;
    while(q--){
        int n;
        cout<<"enter number to get freq. :";cin>>n;
        cout<<"freq."<<mpp[n]<<endl;
    }
    return 0;
}

