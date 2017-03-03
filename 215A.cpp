#include<bits/stdc++.h>
using namespace std;

double a[55],b[55];

int main(){
    int n,m;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
        scanf("%lf",&a[i]);
    }
    scanf("%d",&m);
    int j;
    for(j=0;j<m;j++){
        scanf("%lf",&b[j]);
    }
    int p,q,c=0,mx=-1000;
    double ans=0;
    for(p=0;p<n;p++){
        for(q=0;q<m;q++){
            ans=b[q]/a[p];
            //cout<<ans<<endl;
            int cl=ceil(ans);
            if(ans==cl){
                if(ans>mx){
                    mx=ans;
                    c=0;
                }
                if(ans==mx) c++;
            }
            //cout<<cl<<endl;
        }
    }
    printf("%d\n",c);
    return 0;
}
