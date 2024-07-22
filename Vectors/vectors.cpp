/*
Vectors are the same as dynamic arrays 
with the ability to resize itself 
automatically when an element is 
inserted or deleted, with their 
storage being handled automatically 
by the container
*/

#include<iostream>
#include<vector>
using namespace std;
int main()
{

    //defining vector
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);


      //printing vector method 1
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }


     //printing vector method 2
    vector<int> :: iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<"s"<<endl;
    }


     //printing vector method 3
    for(auto element:v)
    {
        cout<<element<<"d"<<endl;
    }

    return 0;
}