/*

Pattern for N = 5
E
DE
CDE
BCDE
ABCDE

*/

void printPatt(int n)
{
  int i,j;
  char value=65;
  
  
  
  for(i=1;i<=n;i++)
  {
  value=n-i+65;
    for(j=1;j<=i;j++)
    {
      cout<<value;
      value=value+1;
    }
    cout<<endl;
  }
  
}
