#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin >> T;
	
	while(T--)
	{
		int n;
		cin >> n;
		
		string s, r;
		cin >> s >> r;
		
		int c1 = 0, c2 = 0;
		
		for(int i = 0; i<n; i++)
		{
			if(s[i] == '1')
				c1++;
			if(r[i] == '1')
				c2++;
		}
		
		if(c1 == c2)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	
	return 0;
}