#include <bits/stdc++.h>
using namespace std;
#define ll int long long

void solve(int n){
    //if n is even print 2 ....
    while(n % 2 == 0){
        
        cout << "2" << " ";
        n = (n/2);
    }
    
    //n is odd now....
    
    for(int i=3;i<=sqrt(n);i+=2){
        
        while(n%i == 0)
        {
            cout << i << " ";
            n = (n/i);
        }
        
        
    }
    //if n is prime i.e. not divisible by any number...
    if(n > 2)
       cout << n << " ";
    
 cout << endl;
    
}


int main() {
   
   int n;
   cin >> n;
   
   solve(n);
  
    return 0;
}