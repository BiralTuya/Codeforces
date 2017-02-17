#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,c=0,cnt=0;
    scanf("%d %d",&n,&m);
    int i;
    for(i=n+1;i<=m;i++){
        int j;
        for(j=1;j<=i;j++){
            if(i%j==0) c++;
        }
        if(c==2){
            cnt=i;
            break;
        }
        c=0;
    }
    if(cnt==m) printf("YES\n");
    else printf("NO\n");
    return 0;
}
