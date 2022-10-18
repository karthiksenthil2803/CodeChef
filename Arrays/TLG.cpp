#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> p1, p2, lead, win;
	int sum1 = 0, sum2 = 0;
	int lar = INT_MIN;
	int ind = 0;
	
	for(int i = 0; i < N; i++)
	{
		int a, b;
		cin >> a >> b;
		p1.push_back(a);
		p2.push_back(b);
		sum1 += a;
		sum2 += b;
		int ld = abs(sum1 - sum2);
		if(lar < ld)
		{
			lar = ld;
			ind = i;
		}
		lead.push_back(ld);
		
		if(sum1 > sum2)
			win.push_back(1);
		else 
			win.push_back(2);
	}
	
	cout << win[ind] << " " << lead[ind];
}