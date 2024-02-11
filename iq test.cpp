#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int e=0,o=0,even,odd;
    for(int i=1;i<=n;i++){
        cin>>a[i];

        if(a[i]%2==0){
            e++;
            even=i;//
        }
        else{
            o++;
            odd=i;
        }
    }
    if(e>o){
        cout<<odd<<endl;//in here print which oone is difference i mean
        //if even number count is high that mean odd number in here diff then print it
    }
    else{
        cout<<even<<endl;
    }
    return 0;
}
