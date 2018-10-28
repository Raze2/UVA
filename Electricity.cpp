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
			int i,n,a,b, c,d,pa,pb,pc,pd,count,sum;

			while((cin >> n) && n != 0){
				count = 0;
				sum = 0;
				for (i = 0; i < n; i++) {
					cin >> a >> b >> c >> d;
                    if(i!=0){
                    	if (a==pa && b == pb && c == pc){
                    		count++;
                    		sum += (d - pd);
                    	}
                    }
                    if(a == 28 && b == 2 && ((c % 4 == 0) && !(c % 100 == 0)|| (c % 400 == 0)) && i != n-1){
                                        	pa = 29;
                                        	pb = 2;
                                        } else if (a == 28 && b == 2) {
                                        	pa = 1;
                                        	pb = 3;
                                        } else if (a == 29 && b == 2) {
                                            pa = 1;
                                            pb = 3;
                                        } else if (a == 31 && (b==1 || b==3 || b==5 || b==7 || b==8 || b==10 || b==12)) {
                                        	pa = 1;
                                        	pb = b+1;
                                        } else if (a == 30 && (b==4 || b==6 || b==9 || b==11)) {
                                        	pa = 1;
                                        	pb = b+1;
                                        } else {
                                        	pa = a + 1;
                                        	pb = b;
                                        }

                                        if (pb > 12) {
                                        	pb = 1;
                                        	pc = c+1;
                                        } else {
                                        	pc = c;
                                        }

                                        pd = d;
//                                        cout << pa << ' ' << pb << ' ' << pc << ' ' << pd << endl;
				}
				cout << count << ' ' << sum << endl;
			}






			return 0;
}
