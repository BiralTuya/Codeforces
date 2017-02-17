#include<bits/stdc++.h>
using namespace std;

int main(){
    int c=0,d=0;
    string s;
    cin>>s;
    int len=s.length();
    int i;
    for(i=0;i<len;i++){
        if(isupper(s[i])) c++;
        if(islower(s[i])) d++;
    }
    int j;
    for(j=0;j<len;j++){
    if(c>d) putchar(toupper(s[j]));
    if(c<=d) putchar(tolower(s[j]));
    }
    return 0;
}
