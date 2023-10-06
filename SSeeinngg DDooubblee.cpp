#include<bits/stdc++.h>
using namespace std;
#define len(x) (x).begin(),(x).end()
int main(){
  int t;
  cin>>t;
  while(t--)
    {
        string s,s1;
        cin>>s;
        s=s1;
        sort(len(s)),sort(len(s1));
        reverse(len(s1));
        cout<<s+s1<<endl;
    }
  }
