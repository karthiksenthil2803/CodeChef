#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	cin >> T;
	
	while(T--)
	{
		int n;
		cin >> n;	
		vector<int> arr;
		
		for(int i = 0; i <n; i++) {
			int t;
			cin >> t;
			arr.push_back(t);
		}
		
		// // map<int,int> mp;
// 		
		// for(int i = 0; i < n; i++) {
			// mp[arr[i]]++;
		// }
// 		
		auto max = INT_MIN;
		for(auto i = 0; i < n; i++) {
			if(arr[i] > max)
				max = arr[i];
		}
		cout << n - max <<"\n";
	}
	
	return 0;
}