#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,c=0;
    scanf("%d",&n);
    while(n--){
        string s;
        cin>>s;
        if(s[1]=='+' || s[3]=='+') c++;
        else c--;
    }
    printf("%d\n",c);
    return 0;
}
