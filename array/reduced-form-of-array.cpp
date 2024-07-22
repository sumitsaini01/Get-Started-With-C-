//(sizeof(arr)/sizeof(arr[0])) 
//gives the size of array


#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

bool mycompare(pair<int,int>p1, pair<int, int>p2)
{
    return p1.first<p2.first;
}

int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    int arr[n];
    cout<<"enter the elements of array"<<endl;
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    vector<pair<int, int>>v;       //using concept of pair as well as vector

    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++)

    {
        v.push_back(make_pair(arr[i],i));        //filling elements of array in vector
                                               //and pairing the element with its index 
    }

     sort(v.begin(),v.end(),mycompare);   //sorting array

    for(int i=0;i<v.size();i++)      //reduced from of array
    {
        arr[v[i].second]=i;
    }

     for(int i=0;i<v.size();i++)    //printing array
    {
       cout<<arr[i];
    }

}