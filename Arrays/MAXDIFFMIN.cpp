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
		int a,b,c;
		cin >> a >> b >> c;
		
		cout << max(a,max(b,c)) - min(a,min(b,c)) << "\n";
	}
	
	return 0;
}