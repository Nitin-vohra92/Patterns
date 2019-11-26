/*
Print the following arrow pattern
Assume N is always odd.
Note : There is space after every star.
Pattern for N = 7
*
 * *
   * * *
     * * * *
   * * *
 * *
*


*/

#include<iostream>
using namespace std;


int main(){

  int i,n,count;
  i=1;
  cin>>n;
  // while loop for row wise transversal
  while(i<=n)
  {
    if(i<=(n+1)/2)
  {
    count=1;
    // printing spaces
    while(count<=i-1)
    {  cout<<" ";
    count++;
    }    
    count=1;
    // printing stars
    while(count<=i)
    {
      cout<<"*"<<" ";
      count++;
    }
  }
  /* after this if loop
  
  
  * 
   * * 
    * * * 
     * * * * 
     
     
  */
  // for second part of arrow
 if(i>(n+1)/2)
 {
   count=1;
   // printing spaces
   while(count<=n-i)
   {
     cout<<" ";
     count++;
   }
   count=1;
   // printing stars
   while(count<=n+1-i)
   {
     cout<<"*"<<" ";
     count++;
   }
  
 }
     i++;
   cout<<endl;
  }
  //complete arrow will be formed after the else condition

}

