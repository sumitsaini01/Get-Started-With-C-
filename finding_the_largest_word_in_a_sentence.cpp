//finding the largest word along with its length in a sentence 
//normally c++ compiler stores the value of input upto space words that are after the space are stored in new variable 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();    //cin.ignore() function is used to ignore or clear one or more characters from the input buffer

    char arr[n+1];
    cin.getline(arr, n);   //cin.getline() function is used when we have to input a full sentence in one variable
    cin.ignore();

    int i=0;             //to iterate the while loop
    int currlen=0, maxlen=0;
    int st=0, maxst=0;    //st gives us the index of the current word and maxst gives the index of the largest word 
    while(1)
    {
        if(arr[i]==' ' || arr[i] =='\0')     // if these conditions are true then a new word is started or the sentence is ended 
        {
          if(currlen>maxlen)             
          {
            maxlen = currlen;     //assigning the value of currlen to maxlen
            maxst=st;            //assigning the value of st to maxst
          }
          currlen=0;
          st=i+1;         //the next word starts from the index i+1 
        }
        else
        currlen++;
        if(arr[i]=='\0')    //breaking condition of the loop
        {
            break;
        }
        i++;
    }
    cout<<maxlen<<endl;    //printing the length of the largest word

    for(int i=0;i<maxlen;i++)   //printing the largest word 
    {
        cout<<arr[i+maxst];
    }

    return 0;

}