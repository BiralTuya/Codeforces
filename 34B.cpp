#include<bits/stdc++.h>
using namespace std;

int mm[110];

int main(){
    int n,m,minn=10000;
    scanf("%d %d",&n,&m);
    int i,j=0;
    for(i=0;i<n;i++){
        int tv;
        scanf("%d",&tv);
        if(tv<0){
                mm[j]=tv;
                j++;
        }
    }
    int k,s=0;
    sort(mm,mm+n);
    for(k=0;k<m;k++) {
            //cout<<mm[k]<<endl;
            s+=mm[k];
    }
    printf("%d\n",s*(-1));
    return 0;
}
