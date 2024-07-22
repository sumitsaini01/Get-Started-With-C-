# include <iostream>
#include<math.h>          // for exp 
#include<cmath>          // for square root
#include<bits/stdc++.h> //for cube root
using namespace std;

void prime(int n){
    int flag=0;  
         
      for(int i = 2; i <= n; i++)  
      {  
      if(n % i == 0)  
      {  
          cout<<"Number is not Prime."<<endl;  
          flag=1;  
          break;  
      }  
      }  
      if (flag==0)  
      cout << "Number is Prime."<<endl;
       
     return ;
}

void binary(int n){ 
   int a[10];      
   for(int i=0; n>0; i++)    
{    
a[i]=n%2;    
n= n/2;  
}    
   cout<<"Binary of the given number= ";    
   for(int j=j-1 ;j>=0 ;j--)    
  {    
    cout<<a[j];    
  } 
  cout<<endl;   
    return;
 }

int main() {

  char op;
  int num1, num2;

  cout << "Enter two operands: ";
  cin >> num1 >> num2;

  cout << "Enter operator: +, -, *, /, P, E, S, C, B: ";
  cin >> op;


  switch(op) {

    case '+':
      cout<<num1 + num2;
      break;

    case '-':
      cout<< num1 - num2;
      break;

    case '*':
      cout<< num1 * num2;
      break;

    case '/':
      cout << num1 / num2;
      break;
    
    case 'P':
      prime(num1);
      prime(num2);
      break;

    case 'E':
      cout<<exp(num1)<<" "<<exp(num2);
       break;

    case 'S':
     cout<<sqrt(num1)<<" "<<sqrt(num2);
     break;

    case 'C':
     cout<<cbrt(num1)<<' '<<cbrt(num2);
     break;

    case 'B':
     binary(num1);
     binary(num2);
     break;

    default:
      // If the operator is other than +, -, * or /, error message is shown
      cout << "Error! operator is not correct";
      break;
  }

  return 0;
}