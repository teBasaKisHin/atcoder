#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, i, ans;

    ans = 0;

    cin >> A >> B;

    for (i = A; i <= B; i++) {

        int a = i / 10000;
        int b = (i / 1000) % 10;

        int c = (i % 100) / 10;
        int d = i % 10;

        if(a == d && b == c) ans++;
    }

    cout << ans << endl;
    
    return 0;
}
