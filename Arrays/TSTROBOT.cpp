#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin >> T;
	
	while(T--)
	{
		int N, X;
		cin >> N >> X;
		string S;
		cin >> S;
		
		set<int> visit;
		
		visit.insert(X);
		for(int i = 0; i<N; i++) 
		{
			if(S[i] == 'R')
			{
				X++;
				visit.insert(X);
			} else {
				X--;
				visit.insert(X);
			}
		}
		
		cout << visit.size() << endl;
	}
	
	return 0;
}