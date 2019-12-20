
/*

Printing pattern for N
Here, N=4
    1
   23
  345
 4567
 
 */

#include<iostream>
using namespace std;


int main()
{
      int n,i=1;
      cin>>n;

    // for loop for row wise transversal 
   	for(i=1;i<=n;i++)
    {
    // for loops for column wise transversal
    // printing spaces in the pattern
      int count,val=i;
      
        for(count=1;count<=n-i;count=count+1)
        {
            cout<<" ";
        }

    // printing the numbers in the pattern
    
        for(count=1;count<=i;count=count+1)
    	{
            cout<<val;
      	    val=val+1;
        }
        
  cout<<endl;
    }
    
}
