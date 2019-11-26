/*

Pattern for N = 3
 A
 BB
 CCC

 */
 
#include<iostream>
using namespace std;


int main()
{
   int n,j,i;
   cin>>n;
   
   char value='A';
  
   for(i=1;i<=n;i++)
   {
    for(j=1;j<=i;j++)
    {
      cout<<value;
    }
   value++;
  
  cout<<endl;
  }
   
  }


    
    
