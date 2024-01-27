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
		};
    int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}


