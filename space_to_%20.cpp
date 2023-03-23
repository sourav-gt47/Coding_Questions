#include <bits/stdc++.h>
using namespace std;
#define ll int long long

int main()
{
    string str;
    getline(cin,str);
    string ans="";
 
  for(int i=0;i<str.size();i++){
      
      if(str[i] == ' ')
       ans += "%20";
      else
      ans += str[i];
  }
 
  cout << ans << endl;

    return 0;
}
