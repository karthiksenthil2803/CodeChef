#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin >> T;
	
	while(T--)
	{
		int n,x,y;
		cin >> n >> x >> y;
		bool flag = false;
		
		if(y < x && y != 0) {
			flag = false;
		}
		
		if(y % x == 0 || y == 0) {
			flag = true;
		}	
		
		if(flag) cout << "YES\n";
		else cout << "NO\n";
	}
	
	return 0;
}