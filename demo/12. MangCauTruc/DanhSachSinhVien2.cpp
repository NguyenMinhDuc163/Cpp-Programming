#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long

	struct SinhVien
		{
			string ten,lop,ns,ma;
			double gpa;
		};
	void chuanHoa(string &s)
		{
			stringstream ss(s);
			string token;
			s = "";
			while(ss >> token)
				{
					token[0] = toupper(token[0]);
					for(int i = 1; i < token.size();i++)
						token[i] = tolower(token[i]);
					s += token +' ';
				}
			s.pop_back();
		}
	void nhap(SinhVien a[],int n)
		{
			for(int i = 0; i < n;i++)
				{
					cin.ignore();
					getline(cin,a[i].ten);
					chuanHoa(a[i].ten);
					getline(cin,a[i].lop);
					getline(cin,a[i].ns);
					if(a[i].ns[1] == '/')
						a[i].ns = "0" + a[i].ns;
					if(a[i].ns[4] == '/')
						a[i].ns.insert(3,"0");
					cin >> a[i].gpa;
					a[i].ma = to_string(i+1);
					while(a[i].ma.size() < 3)
						{
							a[i].ma = "0" + a[i].ma;
						}
					a[i].ma = "B20DCCN" + a[i].ma;
				}
		}
	void in(SinhVien a[],int n)
		{
			for(int i = 0; i < n;i++)
				{
					cout << a[i].ma <<' ' << a[i].ten <<' ' << a[i].lop <<' ' << a[i].ns <<' ';
					cout << fixed << setprecision(2) << a[i].gpa << endl;
				}
		}
    int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}


