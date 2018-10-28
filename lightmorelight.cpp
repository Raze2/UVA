//============================================================================
// Name        : HelloWorld.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int main() {
			unsigned int n=0, sq=0;
			while (cin >> n && n != 0) {
				sq = (int) sqrt(n);
				cout << (sq * sq == n ? "yes\n" : "no\n");
			}
			return 0;
}
