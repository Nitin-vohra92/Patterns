/*

Print following pattern for N,
Here N=5,
          55555
          45555
          34555
          23455
          12345
 */
 
 #include<iostream>
 using namespace std;


int main()
{

   int i=1,n,val,count;
   cin>>n;
  // While loop for row wise transversal
  
  while(i<=n)
  {
    val=n+1-i;
    count=1;
    // INNER WHILE LOOPS FOR COLUMN WISE TRANSVERSAL
    
    while(count<=i-1)
    {
      cout<<val;
       val=val+1;
      count=count+1;
      
    }
    count=1;
    
    while(count<=n+1-i)
    {
      cout<<n;
      count=count+1;
    }
    i=i+1;
    cout<<endl;
  }
}


