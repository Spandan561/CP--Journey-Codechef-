#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	
	while(t--)
	{
	    int n; cin>>n;
	    int a[n+1];
	    
	    int j=n;
	    for(int i=0;i<n;i+=2)
	    {
	        a[i]=j;
	        j--;
	    }
	    j=1;
	    for(int i=1;i<n;i+=2)
	    {
	        a[i]=j;
	        j++;
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
