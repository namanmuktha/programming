#include <iostream>
using namespace std;

const long long MOD = 1000000007; // 10^9 + 7

long long power(long long a, long long b) {
    long long result = 1;
    a %= MOD;
    while (b > 0) {
        if (b % 2 == 1) {
            result = (result * a) % MOD;
        }
        a = (a * a) % MOD;
        b /= 2;
    }
    return result;
}

int main() {
    int n;
    while(n--){
    long long a, b;
    cin >> a >> b;
    long long result = power(a, b);
    cout << result << endl;
    }
    return 0;
}
