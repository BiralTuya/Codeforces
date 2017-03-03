#include<bits/stdc++.h>
using namespace std;

//string a[110],t[110];

int main(){
    string s,t,a,b;
    int n,c1=0,c2=0;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
        cin>>s;
        if(i==0){
            a=s;
            c1++;
        }
        if(i>0 && a==s){
            a=s;
            c1++;
        }
        else if(i>0 && a!=s){
                b=s;
                c2++;
        }
    }
    //if(n==1) cout<<s<<endl;
    if(c1>c2) cout<<a<<endl;
    else cout<<b<<endl;
    //cout<<c1<<" "<<c2<<endl;
    return 0;
}
