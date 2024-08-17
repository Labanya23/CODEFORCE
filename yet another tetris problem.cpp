#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int i,n,b,l;
        bool c=false;
        for(i=0;i<n;i++){
            cin>>b;
            if(i==0) l=b%2;
            else if(l!=b%2)c=true;
        }
        cout(c?"YES":"NO")<<endl;
    }
    return 0;


}
