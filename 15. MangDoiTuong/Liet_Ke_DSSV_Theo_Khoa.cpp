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
					mp[tmp.getLop().substr(1,2)].push_back(tmp);
				}
			int q; cin >> q;
			cin.ignore();
			while(q--)
				{
					int s; cin >> s;
					cout <<"DANH SACH SINH VIEN KHOA " << s <<":\n";
					s %= 100;
					string tmp = to_string(s);	
					for(SinhVien it: mp[tmp])
						{
							it.in();
						}
				}
			
            return 0;
        }


