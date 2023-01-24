#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		int sum = a + b + c;

		if(a == sum/2 || b == sum/2 || c == sum/2) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}

	return 0;
}

