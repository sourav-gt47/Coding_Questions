#include <bits/stdc++.h>
using namespace std;
#define ll int long long

int main()
{
    
    unordered_map<int,int>mp;
    int n;
    cin >> n;
    int arr[n];
    
    for(int i=0;i<n;i++)
      cin >> arr[i];
    
    //calculating frequency of each and every elements....
    
    for(int i=0;i<n;i++){
        
        mp[arr[i]]++;
    }

    int count=0,max_element=0;
    
    for(auto x: mp){
        
        if(x.second > count){
        
        count=x.second;
        max_element=x.first;
        
        }
        
    }
    cout << max_element << " apears " << count <<" times" <<  endl; 

    return 0;
}
