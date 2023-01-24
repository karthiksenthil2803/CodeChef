#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin >> T;
	
	while(T--)
	{
		ll a, b;
		cin >> a >> b;
		
		if(a <= b/2 || a == b) cout << "YES\n";
		else cout << "NO\n";
	}
	
	return 0;
}