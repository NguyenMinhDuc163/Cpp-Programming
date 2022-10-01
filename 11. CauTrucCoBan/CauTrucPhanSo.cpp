#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	struct PhanSo
		{
			ll tu, mau;
		};
	void nhap(PhanSo &a)
		{
			cin >> a.tu >> a.mau;
		}
	void in(PhanSo a)
		{
			cout << a.tu << "/" << a.mau;
		}
	void rutgon(PhanSo &a)
		{
			ll l = __gcd(a.tu,a.mau);
			a.tu /= l;
			a.mau /=l;
		}
    int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}


