/*
题意：给你两个字符串，例如USACO，那么它所对应的数字为21 * 19 * 1 * 3 * 15 = 17955，如果这个两个字符串模47的值相同，输出"GO"，否
则输出"STAY";
*/
/*
ID: dongjin3
PROG: ride
LANG: C++                 
*/
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
using namespace std;

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    char a[10],b[10];
    while (fin >> a >> b){
    	long long x=1,y=1;
    	int len_a=strlen(a);
    	for (int i=0;i<len_a;i++){
    		x=x*(a[i]-'A'+1);
    	}
    	int len_b=strlen(b);
    	for (int i=0;i<len_b;i++){
    		y=y*(b[i]-'A'+1);
    	}
    	if (x%47 == y%47){
    		fout<<"GO\n";
    	}
    	else
    		fout<<"STAY\n";
    }
    
    return 0;
}
