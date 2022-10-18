#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int n;
		cin >> n;
		int A = 0, B = 0;
		
		for(int i = 0; i<n; i++)
		{
			string s;
			cin >> s;
			if(s == "START38")
				A++;
			else if (s == "LTIME108")
				B++;
		}
		
		cout << A <<" "<< B << endl;
	}
	return 0;
}