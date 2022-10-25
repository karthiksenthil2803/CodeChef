#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin >> T;
	
	while(T--)
	{
		int n , k;
		cin >> n >> k;
		vector<int> arr;
		
		for(int i = 0; i < n; i++) {
			int t;
			cin >> t;
			arr.push_back(t);
		}
		
		bool flag = true;
		int g = 0;
		if(arr.size() == 1)
		{
			flag = true;
		} else {
			sort(arr.begin(), arr.end());
			int sum = arr[0] + arr[n-1];
			if(sum <= k)
				flag = true;
			else
				flag = false;
		}
		if(flag)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;	
	}
	
	return 0;
}