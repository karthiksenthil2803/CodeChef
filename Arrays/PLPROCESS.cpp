#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin >> T;
	
	while(T--)
	{
		ll n;
		cin >> n;
		vector<ll> arr;

		for(ll i = 0; i < n; i++) {
			ll t;
			cin >> t;
			arr.push_back(t);
		}
		
		ll proc1 = arr[0];
		ll proc2 = arr[n-1];
		ll i = 1, j = n-2;
		
		while(i <= j) {
			if(proc1 + arr[i] >= proc2 + arr[j]) {
				proc2 += arr[j];
				j--;
			} else {
				proc1 += arr[i];
				i++;
			}
		}
		
		cout << max(proc1, proc2) << "\n";
	}
	
	return 0;
}