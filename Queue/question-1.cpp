//to find the character which appears max. times in a string 



#include<iostream>
using namespace std;
int main()
{  
    string s="jndjbnjfcdhankwnfujhaks";

    int freq[26];   //the number of letters in english alphabet is 26

    for(int i=0;i<26;i++)   //starting the frequency with 0
    freq[i]=0;

    for(int i=0;i<s.size();i++)  //frequency of ith letter(gives the index of that letter)
    freq[s[i]-'a']++;            //lets suppose "s[i]=b" then "b-a=1" and 1 is the index of b in our english alphabet array

    char ans='a';     
    int maxf=0;

    for(int i=0;i<26;i++)
    {
        if(freq[i]>maxf)   
        {
            maxf=freq[i];
            ans=i+'a';      //represent ith letter  
        }
    }

    cout<<maxf<<' '<<ans<<endl;


    return 0;
}