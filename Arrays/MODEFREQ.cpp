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
		vector<int> arr;
		
		for(int i = 0; i<n; i++) {
			int t;
			cin >> t;
			arr.push_back(t);
		}
		
		map<int, int> mp;
		for(int i = 0; i<n; i++)
			mp[arr[i]]++;
		
		map<int,int> model_val;
		for(auto i : mp) {
			model_val[i.second]++;
		}
		
		int ans = INT_MIN;
		int ind;
		
		for(auto i : model_val) {
			if(i.second > ans) {
				ans = i.second;
				ind = i.first;
			}
		}		
		cout << ind << endl;
	}
	
	return 0;
}