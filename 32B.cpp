#include<bits/stdc++.h>
using namespace std;

int s[210];

int main(){
    string str,s;
    cin>>str;
    int len=str.length();
    int i;
    for(i=0;i<len;i++){
        if(str[i]=='-' && str[i+1]=='.'){
            s+='1';
            i++;
        }
        else if(str[i]=='-' && str[i+1]=='-'){
            s+='2';
            i++;
        }
        else if(str[i]=='.') s+='0';
    }
    cout<<s<<endl;
    return 0;
}
