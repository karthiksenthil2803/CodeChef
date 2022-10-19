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
		string A;
		
		cin >> A;
		
		int i = 0, j = 1;
		// cout << (A[0] ^ A[1]) << endl;
		int sum = 0, maxSum = INT_MIN;
		
		while(j <= N-1) {
			int tempSum = ((int)A[i] ^ (int)A[j]);
			if(tempSum == 0)
			{
				A.erase(i, j-i+1);
			}
			i = j+1;
			j = j + 2;
			sum += tempSum;
		}
		
		cout << sum << endl;
	}
	
	return 0;
}