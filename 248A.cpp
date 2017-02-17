#include<bits/stdc++.h>
using namespace std;

int l[100005];
int r[100005];

int main(){
    int n,a=0,b=0,c=0,d=0,ans=0;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
        scanf("%d %d",&l[i],&r[i]);
    }
    int j;
    for(j=0;j<n;j++){
        if(l[j]==0) c++;
        else if(l[j]==1) d++;
        if(r[j]==0) a++;
        else if(r[j]=1) b++;
    }
    if(c<d) ans+=c;
    else if(c>=d) ans+=d;
    if(a<b) ans+=a;
    else if(a>=b) ans+=b;
    printf("%d\n",ans);
    return 0;
}
