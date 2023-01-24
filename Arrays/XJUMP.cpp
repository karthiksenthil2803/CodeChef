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
		int x, y;
		cin >> x >> y;
		
		if(x % y == 0)
			cout << x/y << "\n";
		else {
			cout << x/y + x % y << "\n";
		}
	}
	
	return 0;
}