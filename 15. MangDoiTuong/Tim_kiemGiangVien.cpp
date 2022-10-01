#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	int k = 1;
	void chuanHoa(string &s);
	string chuanHoaTen(string s);
	class GiangVien
		{
			private:
				string hoTen,boMon,ma,name;
			public:
				void nhap()
					{
						getline(cin,hoTen);
						getline(cin,boMon);
						chuanHoa(boMon);
						name = chuanHoaTen(hoTen);
						ma = to_string(k++);
						while(ma.size() < 2)
							ma = "0" + ma;
						ma = "GV" + ma;
					}
				void in()
					{
						cout << ma <<' ' << hoTen <<' ' <<boMon << endl;
					}
				string getName()
					{
						return this->name;
					}
		};
	
	void chuanHoa(string &s)
		{
				stringstream ss(s);
				string tmp;
				s = "";
				vector<string> v;
				while(ss >> tmp)
					{
						v.push_back(tmp);
					}
				for(int i = 0; i < v.size();i++)
					{
						s += toupper(v[i][0]);
					}
		}
	string chuanHoaTen(string s)
		{
			for(int i = 0; i < s.size();i++)
				s[i] = tolower(s[i]);
			return s;
		}
    int main()
        {
			int n; cin >> n;
			cin.ignore();
			GiangVien a[n];
			for(int i = 0; i < n;i++)
				{
					a[i].nhap();
				}
			int q; cin >> q;
			cin.ignore();
			while(q--)
				{
					string s;
					getline(cin,s);
					cout <<"DANH SACH GIANG VIEN THEO TU KHOA " << s <<":\n";
					s = chuanHoaTen(s);
					for(int i = 0; i < n;i++)
						{
							if(a[i].getName().find(s) != string::npos)
								a[i].in();
						}
				}
			
            return 0;
        }


