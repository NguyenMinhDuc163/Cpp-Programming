#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	int k = 1;
	class SinhVien	
		{
			private:
				string ma,ten,lop,ngaySinh;
				double gpa;
			public:
				friend istream& operator >> (istream& in, SinhVien &x)
					{
						cin.ignore();
						getline(in,x.ten);
						stringstream ss(x.ten);
						x.ten = "";
						string s = "";
						while(ss >> s)
							{
								s[0] = toupper(s[0]);
								for(int i = 1 ; i <s.size();i++)
									{
										s[i] = tolower(s[i]);
									}
								x.ten += s + ' ';
							}
						x.ten.pop_back();
						getline(in,x.lop);
						getline(in,x.ngaySinh);
						if(x.ngaySinh[1] == '/')
							x.ngaySinh = "0" + x.ngaySinh;
						if(x.ngaySinh[4] == '/')
							x.ngaySinh.insert(3,"0");
						in >> x.gpa;
						x.ma = to_string(k++);
						while(x.ma.size() < 3)
							x.ma = "0" + x.ma;
						x.ma = "B20DCCN" + x.ma;
						return in;
					}
			friend ostream& operator << (ostream& out ,SinhVien x)
				{
					out << x.ma << ' ' << x.ten <<' ' << x.lop <<' ' << x.ngaySinh <<' ';
					out << fixed << setprecision(2) << x.gpa << endl;
					return out;
				}
		};
    int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}


