#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    set<int>st;
    st.insert(a);
    st.insert(b);
    st.insert(c);
    st.insert(d);
    int ans=st.size();
    printf("%d\n",4-ans);
    return 0;
}
