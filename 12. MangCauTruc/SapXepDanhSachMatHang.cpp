#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	int k = 1;
	struct matHang
		{
			string ma,ten,nhom;
			double giaMua,giaBan;
			
			void nhap()
				{
					ma = to_string(k++);
					getline(cin,ten);
					getline(cin,nhom);
					cin >> giaMua >>giaBan;
				}
			void in()
				{
					cout << ma <<' ' <<ten <<' ' <<nhom <<' ' ;
					cout << fixed << setprecision(2)<< giaBan - giaMua << endl;
				}
		};
	bool cmp(matHang a,matHang b )
		{
			return a.giaBan - a.giaMua > b.giaBan - b.giaMua;
		}
    int main()
        {
        	int n ; cin >> n;
			matHang a[n];
			for(int i = 0; i < n;i++)
				{
					cin.ignore();
					a[i].nhap();
				}
			sort(a,a+n,cmp);
			for(matHang x:a)
				x.in();
            return 0;
        }


