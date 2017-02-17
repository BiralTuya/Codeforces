#include<iostream>
#include<cstdio>
#include<set>
#include<string>
#include<cstring>
using namespace std;

int main(){
    char a[1000]={0};
    set<char>x;
    int len=0;
    fgets(a,1000,stdin);
    len=strlen(a);
    if(a[len-1]!='\0'){
            a[len-1]='\0';
            len--;
    }
    for(int i=0;i<len;i++){
        if(a[i]>=97 && a[i]<=122)
            x.insert(a[i]);
    }
    printf("%d\n",x.size());
    return 0;
}
