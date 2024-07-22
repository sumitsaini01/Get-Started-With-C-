#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v1;
    v1.push_back(2);
    v1.push_back(5);
    v1.push_back(8);
    v1.push_back(12);


    vector<int>v2 (4,50);
    //50 50 50 50

    swap(v1,v2);
    for(auto element:v1)
    {
        cout<<element<<endl;
    }

     for(auto element:v2)
    {
        cout<<element<<endl;
    }
    return 0; 

}