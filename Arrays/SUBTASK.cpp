#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin >> T;
	
	while(T--)
	{
		int N, M, K;
		cin >> N >> M >> K;
		
		int arr[N];
		int cnt = 0;
		bool mFlag = false;
		
		for(int i = 0; i<N; i++){
			cin >> arr[i];
		}	
		
		for(int i = 0; i < M; i++) {
			if(arr[i] == 1)
				cnt++;
		}
		
		if(cnt == M)
		{
			mFlag = true;
		}
		
		for(int i = M; i < N; i++)
		{
			if(arr[i] == 1)
				cnt++;
		}
		
		if(cnt == N)
			cout << 100 << endl;
		else if (mFlag == true)
			cout << K << endl;
		else
			cout << 0 << endl;
	}
	
	return 0;
}