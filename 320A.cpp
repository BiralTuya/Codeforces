#include<bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cin>>n;
    int len=n.length();
    int i,flag=0;
    for(i=0;i<len;i++){
        if(n[i]=='1' && n[i+1]=='4' && n[i+2]=='4'){
            flag=0;
            i+=2;
        }
        else if(n[i]=='1' && n[i+1]=='4'){
            flag=0;
            i++;
        }
        else if(n[i]=='1'){
            flag=0;
        }
        else{
            flag=1;
            break;
        }
    }
    if(flag==0) printf("YES\n");
    else if(flag==1) printf("NO\n");
    return 0;
}
