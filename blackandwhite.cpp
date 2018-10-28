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
			int a, c;
			double b;
			while(cin >> a >> b >> c){
				if (a == 0 && c == a && b == a){
					break;
				}
				int w=0,bl=0,wi=0,bi=0;
				if(c==0){
					bl=floor(b/2)-3;
					w=ceil(b/2)-4;
//					cout << w << ' ' << bl << endl;
				} else {
					bl=ceil(b/2)-4;
					w=floor(b/2)-3;
//					cout << w << ' ' << bl << endl;
				}
				wi = ((a-6)/2)*w;
				bi = ((a-7)/2)*bl;

				cout << wi+bi<<endl;
			}






			return 0;
}
