#include <iostream>
#include<map>
using namespace std;

int main() {
	int t ; cin>>t;
	while(t--){
	    int n;cin>>n;
	    map<int,int>d;
	    int a[n] ; 
	    for(int i=0 ; i<n ;i++)
	        cin >> a[i];
	    for(int i=0 ; i<n ; i++){
	        d[a[i]]++;
	    }
	    for(auto i : d){
	        if(i.second % 2 == 1){
	            cout << i.first << endl;
	            break;
	        }
	    }
	}
	return 0;
}