#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int ans=0;
	   int i=0,j=k-1;
	   int sum=0;
	   for(int i=0;i<k;i++)
	   {
	       sum+=arr[i];
	   }
	   while(j<n)
	   {
	       
	       ans=max(ans,sum);
	       j++;
	       if(j<n)
	       sum+=arr[j];
	       sum-=arr[i];
	       i++;
	   }
	   cout<<ans<<endl;
	}
}
