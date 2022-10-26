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
			for(int i=0; i<n; i++) {
				int t; 
				cin >> t; 
				arr.push_back(t);
			}
			
			if(n>1) {
				int a, ans = 0;
				a = arr[n-1];
				for(int i = n-2; i>=0; i--) {
					if(a > arr[i]) {
						ans = max(ans, a-arr[i]);
					} else {
						a = arr[i];
					}
				}
				if (ans == 0) cout << "UNFIT\n";
				else cout << ans << "\n";
			}
			else cout <<"UNFIT\n";
		}
		return 0;
	}