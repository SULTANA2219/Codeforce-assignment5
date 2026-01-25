/*
* Course: Competitive Programming Sessional (CCE-2310)
* Assignment: Codeforces ICPC Assiut University Community
* Problem ID: H
* Author: Sultana Jahan Tahmina (ID:E243419)
* Language/Version: GNU G++20 13.2 (64 bit, winlibs)
* Codeforces Profile: https://codeforces.com/profile/hscsultana22
* Date: 2025-11-22
* Statement: 
https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H
*/


#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    bool prime = true;

    for (int i = 2; i < x; i++) {
        if (x % i == 0) {
            prime = false;
            break;
        }
    }

    if (prime)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

