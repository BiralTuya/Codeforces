#include<bits/stdc++.h>
using namespace std;

long long a[1000009];

int main(){
    int n;
    scanf("%d",&n);
    int i,cnt=0,idn=0;
    long long minn=10000000000;
    for(i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]<minn){
            minn=a[i];
            idn=i;
        }
    }
    int j;
    for(j=1;j<=n;j++){
        if(a[j]==minn) cnt++;
    }
    if(cnt>=2) printf("Still Rozdil\n");
    else printf("%d\n",idn);
    return 0;
}
