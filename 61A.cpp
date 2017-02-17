#include<bits/stdc++.h>
using namespace std;

int main(){
    string a1,a2,c;
    cin>>a1;
    cin>>a2;
    int len=a1.length();
    int i;
    for(i=0;i<len;i++){
        if(a1[i]==a2[i]) c+='0';
        else if(a1[i]!=a2[i]) c+='1';
    }
    cout<<c<<endl;
    return 0;
}
