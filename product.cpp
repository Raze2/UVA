//============================================================================
// Name        : HelloWorld.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;

const int MXN = 600;


int main() {
	string st1,st2;
	int i=0,x=0;
	while (cin >> st1){
		cin >> st2;
		reverse(st1.begin(),st1.end());
		reverse(st2.begin(),st2.end());
		int a[MXN];
		memset(a, 0, sizeof(a));
		for (i = 0; i < st1.length(); i++) {
			for (x = 0; x < st2.length(); x++) {
				a[i + x] += (st1[i] - '0') * (st2[x] - '0');
			}
		}
		for (i=0; i<MXN - 1; i++) {
				a[i + 1] += a[i] / 10;
				a[i] %= 10;
		}
		i = MXN - 1;
				while (i > 0 && a[i] == 0) i--;
				for (; i>=0; i--) cout<<a[i];
		cout<<endl;
	}




			return 0;
}
