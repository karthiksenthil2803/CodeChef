#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin >> T;
	
	while(T--)
	{
		int N;
		cin >> N;
		vector<string> arr;
		map<char, int> mp;
		
		for(int i=0; i<N; i++)
		{
			string s;
			cin >> s;
			arr.push_back(s);
			for(int i = 0; i<s.length(); i++)
			{
				mp[s[i]]++;
			}
		}
		
		// "codechef"
		// c - 2, o - 1, d - 1, e - 2, h - 1, f - 1
		
		int cC = mp['c'];
		int oC = mp['o'];
		int dC = mp['d'];
		int eC = mp['e'];
		int hC = mp['h'];
		int fC = mp['f'];
		int cnt = 0;
		
		while(cC >= 2 && oC >= 1 && dC >= 1 && eC >= 2 && hC >= 1 &&  fC >= 1)
		{
			cnt++;
			cC -= 2;
			oC--;
			dC--;
			eC -= 2;
			hC--;
			fC--;
		}
		cout << cnt << endl;
	}
	return 0;
}