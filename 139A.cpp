#include<bits/stdc++.h>
using namespace std;

int a[7];

int main(){
    int n;
    scanf("%d",&n);
    int i;
    for(i=1;i<=7;i++){
        scanf("%d",&a[i]);
    }
    int j,s=0;
    for(j=1;;){


            s+=a[j];
            //cout<<s;
        }
        if(s<n && j==7) j=1;
        else j++;
    }
    printf("%d\n",j-1);
    return 0;
}
