#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	int cnt = 0;

	for(int i = 0; i < 4; i++) {
		cin >> t;
		if(t >= 10)
			cnt++;
	}

	cout << cnt << "\n";
	return 0;
}

