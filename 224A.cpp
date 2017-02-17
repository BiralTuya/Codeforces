#include<bits/stdc++.h>
using namespace std;

double a[3];

int main(){
    int i;
    double q=0,b=0,ans=0;
    for(i=0;i<3;i++){
        scanf("%lf",&a[i]);
    }
    sort(a,a+3);
    q=a[0]/2;
    b=a[1]/q;
    ans=q+q+b;
    printf("%d\n",ans*4);
    return 0;
}

