/* 

Print following pattern for N,
Here N=4
1
11
111
1111

*/


#include<iostream>
using namespace std;

int main() 
{
int n,i=1;
cin>>n;
// while loop for row wise transversal
while(i<=n)
   {
    int count=1;
    // while loop for column wise transversal
    while(count<=i)
    {
        cout<<"1";
        count=count+1;
    }
  
  i=i+1;
  cout<<endl;
  }
  
}
