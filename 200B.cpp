#include<bits/stdc++.h>
using namespace std;

int a[110];

int main(){
    int n;
    double v,ans;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        v+=a[i];
    }
    ans=(double)v/n;
    printf("%.12lf\n",ans);
    return 0;
}
