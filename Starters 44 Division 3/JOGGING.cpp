/**THE FUTURE IS UNPREDICTABLE. SO, BE REMEMBERED THROUGH THE LOVE YOU GIVE & GET. NOT FORGOTTEN FOR HATE OR JUDGEMENT**/
/**Man can do everything,if he is determined. Cause man is not made for defeat, man can be destroyed but not defeated**/

/****************************************
**     Solution by Baspannissu         **
****************************************/

#include<bits/stdc++.h>
#include<stdio.h>
#include <algorithm>
#include <string.h>

#define  ll         long long
#define  llu        unsigned long long

#define  pi         ((2.0)*acos(0.0))
#define  pb         push_back
#define  pf         push_front
#define  eb         emplace_back
#define  mp         make_pair
#define  all(x)     (x).begin(),(x).end()
#define  X          first
#define  Y          second

/*loop*/
#define  spa(i,p,n,m)   for(ll i=n;i<m;i+=p)
#define  den(i,n,m)     for(int i=n;i>=m;i--)
#define  bas(i,p,n,m)   for(ll i=n;i<=m;i+=p)

/*output shortcuts*/
#define  nl         "\n"
#define  Yes        cout<<"Yes\n"
#define  yes        cout<<"yes\n"
#define  YES        cout<<"YES\n"
#define  No         cout<<"No\n"
#define  no         cout<<"no\n"
#define  NO         cout<<"NO\n"
#define take(n)     scanf("%d",&n)
#define give(n)     printf("%d\n",n)

#define  fastio     ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;
ll fib[50];
void fibo_make()
{

    ll x=0;ll y=1;
    fib[0]=x;fib[1]=y;
    for(ll i=2;i<50;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
}
vector<ll>v1;
ll mmm=1000000007;


void body()
{
    ll m,n; cin>>m>>n;
    //ll sum = pow(2,m-1);


    ll sum= n*v1[m-1];

    cout<<sum%mmm<<nl;






    /*

    ll m = abs(x1-x2);
    ll n = abs(y1-y2);

    ll n1 = min(m,n);
    ll m1 = max(m,n);

    if((m1==2 && n1==0) || (m1==4 && n1==2) || (m1==4 && n1==0)||(m1==3 && n1==1)||(m1==1 && n1==1)||(m1==3&&n1==3))
    {
        YES;
    }
    else
    {
        NO;
    }
    */


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;cin>>t;
    //body();
    v1.pb(1);
    ll ans=1;
    for(ll i=0;i<1000010;i++)
    {
        ans*=2;
        ans%=mmm;
        v1.pb(ans);
    }

    while(t--)
    {
        body();
    }
    return 0;



}


