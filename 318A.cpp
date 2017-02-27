#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,k;
    int c=0;
    cin>>n>>k;
    long long half=0;
    if(n%2!=0) half=(n/2)+1;
    else half=n/2;
    if(k<=half){
        long long ans=1+(2*(k-1));
        cout<<ans<<endl;
    }
    if(k>half){
        long long ans1=(k-half)*2;
        cout<<ans1<<endl;
    }
    return 0;
}
