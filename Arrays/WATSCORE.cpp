#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin >> T;
	
	while(T--)
	{
		int N;
		cin >> N;
		map<int, int> mp;
		
		for(int i = 0; i<N; i++)
		{
			int p, s;
			cin >> p >> s;
			
			if(mp.find(p) != mp.end())
			{
				mp[p] = max(mp[p], s);
			}
			else
			{
				mp[p] = s;
			}
		}
		
		int sum = 0;
		
		for(auto i : mp)
		{
			if(i.first <= 8 && i.first >= 1)
			{
				sum+= i.second;
			}	
		}
		cout << sum << endl;
	}
	return 0;
}