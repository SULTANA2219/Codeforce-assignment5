/*
* Course: Competitive Programming Sessional (CCE-2310)
* Assignment: Codeforces ICPC Assiut University Community
* Problem ID: I
* Author: Sultana Jahan Tahmina (ID:E243419)
* Language/Version: GNU G++20 13.2 (64 bit, winlibs)
* Codeforces Profile: https://codeforces.com/profile/hscsultana22
* Date: 2025-11-22
* Statement: 
https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I
*/


#include <iostream>
using namespace std;

int main() {
    int n, r = 0, x;
    cin >> n;

    x = n;

    while (n) {
        r = r * 10 + n % 10;
        n /= 10;
    }

    cout << r << endl;

    if (r == x) cout << "YES";
    else cout << "NO";

    return 0;
}
