#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,t,ans;
    cin>>s;
    cin>>t;
    reverse(t.begin(),t.end());
    if(t==s) printf("YES\n");
    else printf("NO\n");
    return 0;
}
