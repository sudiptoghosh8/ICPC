#include<bits/stdc++.h>
using namespace std;
long long int seed1, seed2;
int get_random() {
    seed1 = (seed1 * 1103515243 + 12345)%(2012345671);
    seed2 = (seed2 * 1092104927 + 54321)%(2094828103);
    int r = (seed1 * seed2) % 100000;
    return r;
}
int main(){
    int t, cs, i, n;
    scanf("%d",&t);
    for(cs = 1; cs<=t; cs++){
        scanf("%d %lld %lld",&n,&seed1,&seed2);
        for(i = 1; i<=n; i++){
            int x = get_random();
            int y = get_random();
            printf("%d %d\n",x,y);
        }
    }
    return 0;
}
