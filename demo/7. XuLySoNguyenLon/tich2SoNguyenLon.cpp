#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	string nhan(string s1,string s2)
		{
			int len1 = s1.size(),len2 = s2.size(), len = len1 + len2;
			vector<int> a,b;
			for(char x : s1)
				a.push_back(x - '0');
			for(char x : s2)
				b.push_back(x - '0');	
			vector<vector<int>> res(len2); // so hang se bang so lan nhan voi dong t2
			int idx = 0;
			for(int i = len2 - 1; i >= 0;i--) 
				{
					int t = 0;
					while(t < idx)
						{
							res[idx].push_back(0);
							t++;
						}
					int nho = 0,tmp;
					for(int j = len1 - 1; j >= 0;j--)
						{
							tmp = a[j] * b[i] + nho; // lay cac ptu cua dong thu 1 nhan dong t2 vay nen co dinh b
							res[idx].push_back(tmp % 10);
							nho = tmp / 10;
						}
					if(nho > 0)
						res[idx].push_back(nho);
					while(res[idx].size() < len) // them cac so 0 vao cho do dai cac hang bang nhau
						res[idx].push_back(0);
					reverse(res[idx].begin(),res[idx].end()); // dao nguoc so vi nay minh nhan nguoc
					idx++;
				}
			int nho = 0;
			string ans = "";
			for(int j = res[0].size() - 1; j >= 0;j--)  // cac cot cau tong
				{
					int tmp = nho;
					for(int i = 0; i < res.size();i++) // cac hang
						{
							tmp += res[i][j]; // cong tung ptu cua cot voi nhau
						}
						ans = char(tmp % 10 + '0') + ans;
						nho = tmp / 10;
				}
			if(nho > 0)
				ans = char(nho + '0') + ans;
			while(ans[0] == '0') // xoa ki tu 0 o dau
				ans.erase(0,1);
			return ans;
		}
    int main()
        {
			int t; cin >> t;
			while(t--)
				{
					string a,b;
					cin >> a >> b;
					if(a == "0" || b == "0") // truong hop 1 trong 2 so bang 0
						cout <<"0\n";
					else
						cout <<nhan(a,b) << endl;
				}
            return 0;
        }
