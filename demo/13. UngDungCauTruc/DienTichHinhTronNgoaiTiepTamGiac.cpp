#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
#define PI 3.141592653589793238
    struct toaDo
        {
            double x,y;
            void nhap()
                {
                    cin >> x >> y;
                }
        };
    double doDai(toaDo a, toaDo b)
        {
            return sqrt(pow(a.x - b.x, 2 ) + pow(a.y - b.y,2));
        }
    void dienTich(toaDo a,toaDo b,toaDo c)
        {
            double AB,AC,BC,dienTichTamGiac,nuaChuVi;
            AB = doDai(a,b);
            AC = doDai(a,c);
            BC = doDai(b,c);
            if(AB + AC <= BC || AB + BC <= AC || AC + BC <= AB)
                {
                    cout <<"INVALID\n";
                    return;
                }
            else
                {
                    nuaChuVi = (AB + AC + BC ) / 2; 
                    dienTichTamGiac = sqrt(nuaChuVi * (nuaChuVi - AB) * (nuaChuVi - AC) * (nuaChuVi - BC));
                    if(dienTichTamGiac == 0)
                    	{
                    		cout <<"INVALID\n";
                   			return;
						}
                    cout <<fixed << setprecision(3) << PI * pow((AB * AC * BC)/ (4 * dienTichTamGiac),2) << endl;
                }
            
        }    
    int main()
        {
            int n; cin >> n;
            while(n--)
                {
                    toaDo a,b,c;
                    a.nhap();
                    b.nhap();
                    c.nhap();
                    dienTich(a,b,c);
                }
            return 0;
        }


