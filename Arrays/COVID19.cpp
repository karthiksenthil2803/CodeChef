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
		for(int i =0; i<n; i++) {
			int t;
			cin >> t;
			arr.push_back(t);
		}		
		
		int cnt = 1;
		int Max = INT_MIN, Min = INT_MAX;
		
		for(int i = 1; i < n; i++)
		{
			if(arr[i] - arr[i-1] <= 2) {
				cnt++;		
			}
			else
			{
				if(cnt < Min)
					Min = cnt;
				if(cnt > Max)
					Max = cnt;
				cnt = 1; 
			}
		}
		if(cnt < Min)
			Min = cnt;
		if(cnt > Max)
			Max = cnt;
		cnt = 1; 
		cout << Min << " " << Max << endl;
	}
	
	return 0;
}