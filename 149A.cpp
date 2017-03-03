#include<bits/stdc++.h>
using namespace std;

int a[15];

int main(){
    int k,s=0;
    scanf("%d",&k);
    int i;
    for(i=0;i<12;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+12);
    int kk,c=0;
    //for(kk=0;kk<12;kk++) cout<<a[kk]<<endl;
    int j;
    for(j=12;;j--){
        s+=a[j];
        //cout<<s<<endl;
        if(s>=k){
            printf("%d\n",c);
            break;
        }
        else if(j==0) {
            printf("-1\n");
            break;
        }
        c++;
    }
    return 0;
}
