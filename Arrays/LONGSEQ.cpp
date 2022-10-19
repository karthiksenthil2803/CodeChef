#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin >> T;
	
	while(T--)
	{
		string str;
		cin >> str;
		// string to_string(str);
		
		int count1 = 0;
		int count0 = 0;
		
		for(int i = 0; i<str.length(); i++)
		{
			if(str[i] == '1')
				count1++;
			else
				count0++;
		}
		
		if(count1 == 1 || count0 == 1)
		{
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
	}
	return 0;
}