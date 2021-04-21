#include <bits/stdc++.h>
using namespace std;
#define ll long long

int gcd(int a, int b)
{
    if(a%b == 0)
        return b;
    return gcd(b,a%b);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll a, b, m;
        cin >> a >> b >> m;
        ll co = 0;
        for(int i = 0; i <= m; ++i)
        {
//
            if(gcd(a+i,b+i) == 1)
            {
//                cout << "a = " << a+i << ", b = " << b+i << endl;
                co++;
            }

        }
        cout << co << endl;
    }
    return 0;
}
