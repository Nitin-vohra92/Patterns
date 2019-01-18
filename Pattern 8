/*
 Print following pattern for N,
 N=4
 	1
 	11	
	202
 	3003
	
*/
#include<iostream>
using namespace std;

int main() {

int n,i=2;
cin>>n;
//PRINTING "1" AS IT IS NOT A PART OF PATTERN

if(n>=1)
{
    cout<<"1"<<endl;
}
// WHILE LOOP FOR ROW WISE TRANSVERSAL
while(i<=n)
{

    int count=1;
    while(count<=i)
    {
    // WHILE LOOP FOR COLUMN WISE TRANSVERSAL
        if(count==i || count==1)
        {
            cout<<i-1;
        }
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
