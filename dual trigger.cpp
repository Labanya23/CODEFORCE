#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>a;
        for(int i=0;i<n;i++){
            if(s[i]=='1')
                a.push_back(i);
        }
        if(a.size()%2){
            cout<<"NO\n";
            return;
        }
        if(a.size()==2 && a[1]==a[0]+1){
            cout<<"NO"<<endl;
            return;
        }
        cout<<"YES"<<endl;
    }
    return 0;
}
