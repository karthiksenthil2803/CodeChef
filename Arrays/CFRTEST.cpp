#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin >>T;
	
	while(T--)
	{
		int n;
		cin >> n;
		vector<int> arr;
		
		for(int i = 0; i<n; i++)
		{
			int t;
			cin >> t;
			arr.push_back(t);
		}
		
		int count = 0;
		sort(arr.begin(), arr.end());
		
		for(int i = 1; i<n; i++)
		{
			if(arr[i-1] == arr[i])
				count++;
		}
		
		cout << n - count << endl;
	}
	return 0;
}