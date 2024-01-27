#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long

	struct PhanSo
		{
			ll tu,mau;
		};
	void rutGon(PhanSo &a)
		{
			ll l = __gcd(a.tu,a.mau);
			a.tu /= l;
			a.mau /= l;
		}
	void process(PhanSo a, PhanSo b)
		{
			PhanSo c,d;
			ll mauChung = a.mau /__gcd(a.mau,b.mau) * b.mau;
			c.tu = mauChung / a.mau * a.tu + mauChung / b.mau * b.tu;
			c.tu *= c.tu;
			c.mau = mauChung;
			c.mau *= c.mau;
			rutGon(c);
			d.tu = 1ll*a.tu * b.tu *c.tu;
			d.mau = 1ll*a.mau * b.mau * c.mau;
			rutGon(d);
//			if(d.tu * d.mau < 0)
//				{
//					d.tu = abs(d.tu);
//					d.mau = abs(d.mau);
//					d.tu *= - 1;
//				}
			cout << c.tu <<'/' <<c.mau <<" " << d.tu <<'/' << d.mau << endl;
		}
    int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}




