#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin >> T;
	
	while(T--)
	{
		int x,y;
		cin >> x >> y;
		
		if(2*x > 5*y) {
			printf("Chocolate\n");
		} else if (2*x < 5*y) {
			printf("Candy\n");
		} else {
			printf("Either\n");
		}
			
	}
	
	return 0;
}