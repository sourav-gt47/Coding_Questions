#include <bits/stdc++.h>
using namespace std;
#define ll int long long

int main() {
    int n;
    cin >> n;
    int arr[n][n];
    
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n;j++){
            
            cin >> arr[i][j];
        }
    }

 int sum_dp=0;
 int sum_sp=0;
 
   
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n;j++){
           
           if(i == j){
               sum_dp += arr[i][j];
               
           }
           
          else if(i+j == n-1){
              
              sum_sp += arr[i][j];
           }
           
    }
}
     cout << "Principal Diagonal: " << sum_dp << endl;
     cout << "Secondary Diagonal: " << sum_sp << endl; 
 
    return 0;
}