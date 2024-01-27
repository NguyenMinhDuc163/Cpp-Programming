//#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std ;
#define ll long long
	struct Point 
		{
			double x,y;
		};
	void input(Point &a)
		{
			cin >> a.x >> a.y;	
		}	
		
	double distance(Point a,Point  b)
		{
			return sqrt(pow(a.x - b.x,2) + pow(a.y - b.y,2));
		}
    int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}



