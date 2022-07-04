#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int n; cin>>n;
	    int p;
	    if(n%3==0)
	    {
	        cout<<0<<endl;
	    }
	    else
	    {
	        p=n/3+1;
	        cout<<p*3 - n<<endl;
	    }
	}
	return 0;
}
