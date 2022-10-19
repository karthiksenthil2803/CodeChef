#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
	int i = 0, j = s.length()-1;
	
	while(i <= j)
	{
		if(s[i] != s[j])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int T;
	cin >> T;
	
	while(T--)
	{
		int n;
		string s;
		cin >> n >> s;
		vector <string> arr;
		int i = 0, j = 1;
		
		while(i<s.length())
		{
			while(j <= s.length() - i)
			{
				string tem = s.substr(i, j-i+1);
				if(isPalindrome(tem))
				{
					arr.push_back(tem);
					break;				
				}
				j++;
			}
			i = j;
			j += 1;
		}
		
		cout << arr.size() << endl;
		for(int i = 0; i<arr.size(); i++)
		{
			cout << arr[i].size() << " ";
		}
	}
	return 0;
}