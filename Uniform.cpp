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
			int a,b;
	        while(cin>>a>>b){
	        	int x=0,i=0, o=0, z=0;
	        	int arr[b];
//	        	cout << a << ' ' << b << endl;
	        		        for (x = 0; x <b; x++) {
	        					o = (i + a)%b;
	        					if (o >= b){
	        						break;
	        					}

	        					arr[x] = o;
	        	//				cout << o << i;
	        	//				cout << endl;
	        					i = o;
	        				}
	        		        int farr[x-1];
	        		        for (z = 0; z < x; z++) {
	        					farr[z] = arr[z];
	        				}
	        		        int n = sizeof(farr)/sizeof(farr[0]);
	        		        sort(farr, farr+n);
	        		        int f=10-(int)(log10(a)+1),s=10-(int)(log10(b)+1),y=0,e=0;
	        	//	        cout << f << " " << s << endl;
	        		        for (z = 0; z < x-1; z++) {
	        	//				cout << farr[z];
	        					if (farr[z] - farr[z-1] != 1) {
	        						for (y = 0; y < f; y++) {
	        							cout << " ";
	        						}
	        						cout << a;
	        						for (y = 0; y < s; y++) {
	        							cout << " ";
	        						}
	        						cout << b;
	        						for (y = 0; y < 4; y++) {
	        							cout << " ";
	        						}
	        						cout << "Bad Choice";
	        						cout << endl;
	        						cout << endl;
	        						e=1;
	        						break;
	        					}
	        				}

	        		        if (e == 0) {
	        		        	for (y = 0; y < f; y++) {
	        		        		        		        	cout << " ";
	        		        		        		        }
	        		        		        		        cout << a;
	        		        		        		        for (y = 0; y < s; y++) {
	        		        		        		        	cout << " ";
	        		        		        		        }
	        		        		        		        cout << b;
	        		        		        		        for (y = 0; y < 4; y++) {
	        		        		        		        	cout << " ";
	        		        		        		        }

	        		        		        		        cout << "Good Choice";
	        		        		        		        cout << endl;
	        		        		        		        cout << endl;
	        		        }
	        }

			return 0;
}
