/*
printing pattern for N
here, N=3
      1
    2 3 2
  3 4 5 4 3 
*/

#include <iostream>
using namespace std;

int main() 
{
    int n;
    int i=1;

	cin>>n;
	while(i<=n)
    {
  int count=1;
 
    // printing spaces in the pattern first
      while(count<=n-i)
      {
        cout<<" ";
        count=count+1;

      }
      count=1;
      int val=i;
//  printing the first half pattern 
/*
      1
    2 3
  3 4 5
*/
    while(count<=i)
    {
      cout<<val;
      val=val+1;
      count=count+1;
    }
      count=1;
      val=2*(i-1);
      
      // printing the next half pattern
      /*
      
        1
      2 3 2
    3 4 5 4 3
     
     */
      while(count<=i-1)
      {
        cout<<val;
        val=val-1;
        count=count+1;
      }
      i=i+1;
      cout<<endl;
    }
    return 0;
}

