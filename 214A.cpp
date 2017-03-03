#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    if(n==1 && m==1) printf("%d\n",2);
    else{
    int i,j,c=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            int n1,m1;
            n1=(i*i)+j;
            m1=i+(j*j);
            if(n1==n && m1==m) c++;
        }
    }
    printf("%d\n",c);
    }
    return 0;
}
