/*
  Print following pattern for N
  Here, N = 4
	1234
	123
	12
	1
*/

#include<iostream>
using namespace std;

int main() 
{
	int n;
	int i=1;
	cin>>n;
	
// while loop for row wise transversal
while(i<=n)
{

    int count=1;
    int value=1;
    
// while loop for column wise transversal
    while(count <= (n+1)-i)
    {
        cout<<value;
        value++;
        count++;
    }

 i++;
 cout<<endl;
}

    }
