#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<int> arr;
	bool flag = true;
	
	for(auto i = 0; i < n; i++) {
		int t;
		cin >> t;
		arr.push_back(t);
	}
	
	for(int i = 1; i < n; i++) {
		if(arr[i] < arr[i-1]) {
			cout <<"No\n";	
			flag = false;
			break;
		}
	}
	
	if(flag) cout << "Yes\n";
	
	return 0;
}

