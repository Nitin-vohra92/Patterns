/*
Print pattern for N,
Here N=5

	1
	11
	121
	1221
	12221
*/

#include<iostream>
using namespace std;

int main() {
int n,i=2;
cin>>n;
// printing 1 because it's not the part of pattern
if(n>=1)
{
    cout<<"1"<<endl;
}
// while loop for row wise transversal

while(i<=n)
{

    int count=1;
    // while loop for column wise transversal
    while(count<=i)
    {
    	// printing (row-1) if the pointer is at start or end column
        if(count==i || count==1)
        {
            cout<<i-1;
        }
	// else printing "0" everywhere
        else
	{
	cout<<0;
	}

count=count+1;

}
i=i+1;
cout<<endl;
    }
}
