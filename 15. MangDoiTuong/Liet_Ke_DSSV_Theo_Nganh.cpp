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
				string getMa()
					{
						return this->ma;
					}
				string getLop()
					{
						return this->lop;
					}
		};
	string maNganh(string &s)
		{
			stringstream ss(s);
			string tmp,ans = ""; 
			vector<string> v;
			while(ss >> tmp)
				{
					v.push_back(tmp);
				}
			for(int i = 0; i < 2;i++)
				{
					ans += toupper(v[i][0]);
				}
			return ans;
		}
	void chuanHoa(string &s)
		{
			for(int i = 0; i < s.size();i++)
				s[i] = toupper(s[i]);
		}
    int main()
        {
			int n; cin >> n;
			cin.ignore();
			SinhVien a[n];
			map<string,vector<SinhVien>> mp;
			for(int i = 0;  i < n;i++)
				{
					SinhVien tmp; tmp.nhap();
					mp[tmp.getMa().substr(5,2)].push_back(tmp);
				}
			int q; cin >> q;
			cin.ignore();
			while(q--)
				{
					string s; getline(cin,s);
					chuanHoa(s);
					cout <<"DANH SACH SINH VIEN NGANH " << s <<":\n";
					string ans = maNganh(s); 
					if(ans =="CN" || ans == "AT")
						{
							for(SinhVien it: mp[ans])
								{
									if(it.getLop().find("E") == string::npos)
										it.in();
								}
						}
					else
						{
							for(SinhVien it: mp[ans])
								{
										it.in();
								}
						}
				}
			
            return 0;
        }


