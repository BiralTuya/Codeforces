#include<bits/stdc++.h>
using namespace std;

int main(){
    int y,y1=0,t=0,y2=0,t1=0,y3=0,y4=0;
    scanf("%d",&y);
    int i;
    for(i=y+1;i<=9012;i++){
        y1=i/1000;
        t=i/100;
        y2=t%10;
        t1=i/10;
        y3=t1%10;
        y4=i%10;
        //cout<<y1<<" "<<y2<<" "<<y3<<" "<<y4;
        if(y1!=y2 && y1!=y3 && y1!=y4){
            if(y2!=y3 && y2!=y4){
                if(y3!=y4){
                    printf("%d\n",i);
                    break;
                }
            }
        }
    }
    return 0;
}
