/*

Pattern for N=6
      0
     101
    21012
   3210123
  432101234
 54321012345
6543210123456

*/

#include <bits/stdc++.h> 
using namespace std; 
  

int main() 
{  
    int n ;
    cin>>n;
    n=n+1;
  
   int a = 1, b = 1; 
    for (int i = 0; i < n; i++) { 
        
        for (int j = n - 1; j > i; j--) { 
            cout << " "; 
        } 
  
        for (int k = 1; k <= a; k++) { 
            if(k>b)
                cout<<k-b;
            else
                cout<<b-k;
        } 
  
        a = a+ 2; 
        b++; 
        cout << endl; 
    } 
      
    return 0; 
} 
