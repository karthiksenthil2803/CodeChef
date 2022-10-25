#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin >> T;
	
	while(T--)
	{
		string s;
		cin >> s;
		
		int n = s.length();
		
		if(n %2 == 0) {
//			string str1, str2;
			map<char, int> mp1, mp2;
			
			for(int i = 0; i < n/2; i++) {
				mp1[s[i]]++;
			}
			for(int i = n/2; i<n; i++) {
				mp2[s[i]]++;
			}
			
			if(mp1 == mp2)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		} else {
			// Odd Case
			map<char, int> mp1, mp2;
			
			for(int i = 0; i < n/2; i++) {
				mp1[s[i]]++;
			}
			for(int i = n/2 + 1; i<n; i++) {
				mp2[s[i]]++;
			}
			
			if(mp1 == mp2)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}
	
	return 0;
}