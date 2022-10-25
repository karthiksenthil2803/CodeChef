#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin >> T;
	
	while(T--)
	{
		int N;
		cin >> N;
		int arr[N];
		for(int i =0; i< N; i++)
			cin >> arr[i];
		
		map <int, int> mp; 
		for(int i = 0; i < N; i++) {
			mp[arr[i]]++;
		}	
		if(mp.size() == 1)
			cout << "YES" << endl;
		else {
			vector<int> freq;
			for(auto i : mp) {
				freq.push_back(i.second);
			}
					
			bool flag = false;
			sort(freq.begin(), freq.end());
			int max = freq[freq.size()-1];
			
			for(int i = 0; i < freq.size()-1; i++) {
				if(freq[i] == max) {
					flag = true;
					break;
				} else {
					continue;
				}
			}
			
			if(flag == true)
				cout << "NO" << endl;
			else
				cout << "YES" << endl; 
		}
	}
	
	return 0;
}