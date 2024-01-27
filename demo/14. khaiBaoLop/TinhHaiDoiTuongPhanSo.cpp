#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	
	class PhanSo
		{
			private:
				ll tu,mau;
			public:
				PhanSo(ll tu,ll mau)
					{
						this->tu = tu;
						this->mau = mau;
					}
				friend istream& operator >> (istream& in, PhanSo &x)
					{
						in >> x.tu >> x.mau;
						return in;
					}
				friend ostream& operator <<(ostream& out ,PhanSo x)
					{
						out <<x.tu <<'/' <<x.mau;
						return out ;
					}
				void rutgon()
					{
						ll l = __gcd(tu,mau);
						tu /= l;
						mau /= l;
					}
				friend PhanSo operator + (PhanSo a, PhanSo b)
					{
						ll mauChung = a.mau / __gcd(a.mau,b.mau) * b.mau;
						a.tu = mauChung / a.mau * a.tu + mauChung / b.mau * b.tu;
						a.mau = mauChung;
						a.rutgon();
						return a;
					}
		};
		
	int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}



