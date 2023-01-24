#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	
	int x=0,y=1,z;
	for(int i = 0; i <n; i++) {
		cout << x <<" ";
		z = x + y;
		x = y;
		y = z;
	}	
	
	return 0;
}