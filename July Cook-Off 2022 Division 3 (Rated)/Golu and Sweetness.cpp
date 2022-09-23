#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int Eulerphi(int p)
{
    int ret=p;
    for(int i=2;i*i<=p;i++)
    {
        if(p%i==0)
        {
            while(p%i==0)
            {
                p/=i;
            }
            ret-=ret/i;
        }
        //cout<<ret<<endl;
    }
    if(p>1)
    {
        ret-=ret/p;
    }
    return ret;
}


bool isPrime(int n)
{
    if(n==0 || n==1)
    {
        return 0;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    FIO
    int t,p; cin>>t>>p;
    vector<int>v1(t+10,0);
    for(int i=1;i<=t;i++)
    {
        int x;
        cin>>x;
        int val=0;
        if(isPrime(Eulerphi(x)))
        val=1;
        v1[i] += v1[i-1]+val;

    }
    while(p--)
    {
        int l,r,ans=0; cin>>l>>r;
        cout<<v1[r]-v1[l-1]<<"\n";
    }


    //return 0;

}
