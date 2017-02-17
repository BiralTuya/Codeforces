#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np,a=0;
    scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);
    int kl=k*l;
    int klnl=kl/nl;
    int lim=c*d;
    int slt=p/np;
    //cout<<klnl<<" "<<lim<<" "<<slt;
    if(klnl<=lim && klnl<=slt) a=klnl;
    else if(lim<=klnl && lim<=slt) a=lim;
    else if(slt<=klnl && slt<=lim) a=slt;
    printf("%d\n",a/n);
    return 0;
}
