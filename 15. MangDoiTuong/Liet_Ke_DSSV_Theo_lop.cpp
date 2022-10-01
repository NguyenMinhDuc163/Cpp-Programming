#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	class SinhVien
		{
			private:
				string ma,ten,lop,email;
			public:
				void nhap()
					{
						getline(cin,ma);
						getline(cin,ten);
						getline(cin,lop);
						getline(cin,email);
					}
				void in()
					{
						cout << ma <<' ' << ten <<' ' <<lop <<' ' <<email << endl;
					}
				string getLop()
					{
						return this->lop;
					}
		};
	

    int main()
        {
			int n; cin >> n;
			cin.ignore();
			SinhVien a[n];
			map<string,vector<SinhVien>> mp;
			for(int i = 0;  i < n;i++)
				{
					SinhVien tmp; tmp.nhap();
					mp[tmp.getLop()].push_back(tmp);
				}
			int q; cin >> q;
			cin.ignore();
			while(q--)
				{
					string s; getline(cin,s);
					cout <<"DANH SACH SINH VIEN LOP " << s <<":\n";
					for(SinhVien it: mp[s])
						{
							it.in();
						}
				}
			
            return 0;
        }


