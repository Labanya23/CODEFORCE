#include<bits/stdc++.h>
using namespace std;
int main(){
         int t;
         cin>>t;
         while(t--){
            int n;
            cin>>n;
            int a[n],ans;
            for(int i=0;i<n;i++)
            {
               cin>>a[i];

             ans=INT_MAX;
            if(i>0){
                ans=min(ans,max(a[i],a[i-1]));
            }
            }
            cout<<ans-1<<endl;
         }
         return 0;


}
