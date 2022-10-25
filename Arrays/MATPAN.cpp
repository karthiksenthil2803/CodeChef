#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin >> T;
	
	while(T--)
	{
		int pr[26];
		for(int i = 0; i<26; i++)
			cin >> pr[i];
			
		string str;
		cin >> str;
		
		map<char, int> mp;
		for(int i = 0; i < str.length(); i++) {
			mp[str[i]]++;		
		}
		
		int sum = 0;
		
		for(char c = 'a'; c <= 'z'; c++) {
			if(mp.find(c) != mp.end()) {
				continue;
			} else {
				char st = c;
				sum += pr[st - 'a'];
			}
		}
		
		cout << sum << endl;
	}
	
	return 0;
}