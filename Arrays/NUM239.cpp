#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin >> T;
	
	while(T--)
	{
		int L, R;
		cin >> L >> R;
		int cnt = 0;
		
		for(int i = L; i<=R; i++)
		{
			if ( i % 10 == 2 || i % 10 == 3 || i % 10 == 9)
				cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}