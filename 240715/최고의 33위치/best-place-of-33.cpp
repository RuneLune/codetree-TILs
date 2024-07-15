#include <iostream>
#include <array>
#include <bitset>

using namespace std;

size_t const MAX_N = 20;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, ans = 0;
    array<bitset<MAX_N>, MAX_N> map;

    cin>>n;
    for(int i=0; i<n; ++i)
        for(int j=0; j<n; ++j)
        {
            bool b;
            cin>>b;
            if(b)
                map.at(i).set(j);
        }

    for(int i=2; i<n; ++i)
        for(int j=2; j<n; ++j)
        {
            int cnt = 0;
            for(int k=i-2; k<=i; ++k)
                for(int l=j-2; l<=j; ++l)
                    if(map.at(k).test(l))
                        ++cnt;
            ans = max(ans, cnt);
        }
    
    cout << ans;

    return 0;
}