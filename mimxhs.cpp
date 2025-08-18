#include<bits/stdc++.h>
using namespace std;

int main(){

    //array input
    int n;
    cout<<"arr size: ";cin>>n;
    int a[n];
    cout<<"enter arr: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //pre storing
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }

    //visualizing map
    for(auto it:mp){
        cout<<it.first<<"->"<<it.second<<endl;
    }

    //finding max and min freq element
    int maxfreq=0,minfreq=n;
    int maxele=0,minele=0;
    for(auto it: mp){
        int element=it.first;
        int freq=it.second;

        if(freq>maxfreq){
            maxele=element;
            maxfreq=freq;
        }
        if(freq<minfreq){
            minele=element;
            minfreq=freq;
        }
    }
    cout<<"Element with lowest freq is: "<<minele<<" the freq is: "<<minfreq<<endl;
    cout<<"element with highest freq is: "<<maxele<<" the freq is: "<<maxfreq<<endl;

    return 0;


}