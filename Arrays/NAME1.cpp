#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin >> T;
	
	while(T--)
	{
		string A, B;
		int n;
		cin >> A >> B;
		cin >> n;
		
		map<char, int> mp1, mp2;
		string C;
				
		for(int i = 0; i<n; i++) {
			string t;
			cin >> t;
			C = C + t;
		}
		
		string Z = A + B;
		for(auto s : Z) {
			mp1[s]++;
		}
		
		bool flag = false;
		
		for(auto s : C) {
			mp2[s]++;
			if(mp2[s] > mp1[s]) {
				flag = true;
				break;
			}
		}
		
		if(flag) 
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
	
	return 0;
}