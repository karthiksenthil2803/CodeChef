#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin >> T;
	
	while(T--)
	{
		int N, M, K;
		// M - Number of Ignored Source Files
		// K - Number of Tracked Source Files
		cin >> N >> M >> K;
		int A[M], B[K];
		set<int> visit;
		for(int i = 0; i<M; i++)
		{
			cin >> A[i];
			visit.insert(A[i]);
		}
		for(int i = 0; i<K; i++)
		{
			cin >> B[i];
			visit.insert(B[i]);
		}
		
		int cnt = 0;
		
		if(M>K)
		{
			for(int i = 0; i<M; i++)
			{
				for(int j = 0; j<K;  j++)
				{
					if(A[i] == B[j]) {
						cnt++;
						break;
					}
				}
			}
		} else {
			for(int i = 0; i<K; i++)
			{
				for(int j = 0; j<M;  j++)
				{
					if(B[i] == A[j]){
						cnt++;
						break;
					}
				}
			}
		}
		
		cout << cnt << " "<< N - visit.size() << endl;
	}
	
	return 0;
}