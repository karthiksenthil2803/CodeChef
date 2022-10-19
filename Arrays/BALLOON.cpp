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
		vector<int> arr;
		
		for(int i = 0; i< N; i++)
		{
			int temp;
			cin >> temp;
			arr.push_back(temp);
		}
		
		int ind = 0;
		
		unordered_set <int> set;
		for(int i = 1; i<=7; i++)
			set.insert(i);
			
		for(int i = 0; i<N; i++)
		{
			if(set.find(arr[i]) != set.end())
			{
				ind = i;
			}
		}
		
		cout << ind + 1 << endl;
	}	
	return 0;
}