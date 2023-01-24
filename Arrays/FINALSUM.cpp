#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> p;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin >> T;
	
	while(T--)
	{
		int n, q;
		cin >> n >> q;
		vi arr(n);
		
		int sum = 0;
		for(auto &v : arr) {
			cin >> v;
			sum += v;
		}
		
		for(int i = 0; i < q; i++) {
			int a, b;
			cin >> a >> b;
			
			int temp = b - a + 1;
			if(temp % 2 == 0)
				continue;
			else
				sum++;
		}
// 			
			// for(int i = 0; i < n; i++)
				// cout << arr[i] << " ";
			// cout << "\n";
		cout << sum << "\n";
	}
	
	return 0;
}