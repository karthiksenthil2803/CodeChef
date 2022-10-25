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
		set<string> SET;
		int n = s.length() - 1;
		for(int i = 0; i < n; i++) {
			string temp = s.substr(i, 2);
			if(SET.find(temp) != SET.end()) {
				continue;
			} else {
				SET.insert(temp);
			}	
		}
		
		cout << SET.size() << endl;
	}
	
	return 0;
}