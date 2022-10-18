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
		vector<long long int> arr;

		for(int i = 0; i<n; i++)
		{
			long long int temp;
			cin >> temp;
			arr.push_back(temp);	
		}	
		
		vector<int> t;
		
		for(int i = 1; i<n; i++)
		{
			if(arr[i-1] != arr[i])
			{
				t.push_back(i-1);
				t.push_back(i);
			}
		}
		
		int ans = t.size();
		for(int i = 1; i<t.size(); i++)
		{
			if(t[i] == t[i-1])
				ans--;
		}
		cout << ans << endl;
	}
	
	return 0;
}