
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    bool f=true;
    for(int i=0;i<n;i++){
        cin>>a[i];
        while(a[i]%3==0) a[i]=a[i]/3;
        while(a[i]%2==0) a[i]=a[i]/2;
            if(a[i]!=a[0]) f=false;
    }
    /*
    for(int i=1;i<n-1;i++){
        if(a[i]%3==0||a[i]%2==0){
           if(a[i]=a[0])
           f=true;

               // break;
        }
    }
    */
    cout<<(f?"YES":"NO")<<endl;
    return 0;


}
