#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int i;
    printf("%d ",n);
    for(i=1;i<n;i++){
        printf("%d",i);
        if(i==(n-1)) printf("\n");
        else printf(" ");
    }
    return 0;
}
