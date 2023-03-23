#include <bits/stdc++.h>
using namespace std;
#define ll int long long

int main()
{   
    
    vector<int> v;
    int n , d;
    cin >> n;
    int arr[n];
    
    for(int i=0;i<n;i++)
      cin >> arr[i];
         
    cin >> d;
    
    //push d to n elements.... 
    for(int i=d;i<n;i++)
      v.push_back(arr[i]);
      
      
    //push 1 to d elements  
    for(int i=0;i<d;i++)
      v.push_back(arr[i]);
      
      
      for(auto x: v){
          
          cout << x << " ";
      }
  
    return 0;
}
