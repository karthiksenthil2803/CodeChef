#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		int n;
		cin >> n;
		int arr[n];
		for(int i = 0; i < n; i++)
			cin >> arr[i];

		int k;
		cin >> k;
		k -= 1;
		int val = arr[k];
		sort(arr, arr+n);
		for(int i = 0; i < n; i++)
			if(arr[i] == val) {
				cout << i + 1 << "\n";
				break;
			}
	}
	return 0;
}
