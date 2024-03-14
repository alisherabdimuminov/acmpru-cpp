// string author = "Ali";
// string date = "14/03/2024"
#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b;
    cin >> a >> b;
    for (int i = 0; i <= 10000000; i++) {
        a+=i;
    }
    cout << a + b << "\n";
}

int main() {
    // clock_t start_time = clock();
    solve();
    // clock_t end_time = clock();
    // printf("%.2f", double(end_time - start_time) / CLOCKS_PER_SEC);
}
