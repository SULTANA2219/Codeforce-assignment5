/*
* Course: Competitive Programming Sessional (CCE-2310)
* Assignment: Codeforces ICPC Assiut University Community
* Problem ID: G
* Author: Sultana Jahan Tahmina (ID:E243419)
* Language/Version: GNU G++20 13.2 (64 bit, winlibs)
* Codeforces Profile: https://codeforces.com/profile/hscsultana22
* Date: 2025-11-22
* Statement: 
https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G
*/


#include <iostream>
using namespace std;

int main() {
    int T, N;
    cin >> T;

    while (T--) {
        cin >> N;

        long long f = 1;
        for (int i = 1; i <= N; i++)
            f = f * i;

        cout << f << endl;
    }
    return 0;
}
