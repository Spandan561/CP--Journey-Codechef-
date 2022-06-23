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

void body()
{
    ll x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;

    vector<pair<ll,ll>>v1,v2;

    if((x1+2)<=8 && (y1+1)<=8)
    {
        v1.pb(mp(x1+2,y1+1));
    }
    if((x1+2)<=8 && (y1-1)>=1)
    {
        v1.pb(mp(x1+2,y1-1));
    }
    if((x1-2)>=1 && (y1+1)<=8)
    {
        v1.pb(mp(x1-2,y1+1));
    }
    if((x1-2)>=1 && (y1-1)>=1)
    {
        v1.pb(mp(x1-2,y1-1));
    }
    if((x1+1)<=8 && (y1+2)<=8)
    {
        v1.pb(mp(x1+1,y1+2));
    }
    if((x1+1)<=8 && (y1-2)>=1)
    {
        v1.pb(mp(x1+1,y1-2));
    }
    if((x1-1)>=1 && (y1+2)<=8)
    {
        v1.pb(mp(x1-1,y1+2));
    }
    if((x1-1)>=1 && (y1-2)>=1)
    {
        v1.pb(mp(x1-1,y1-2));
    }



       if((x2+2)<=8 && (y2+1)<=8)
    {
        v2.pb(mp(x2+2,y2+1));
    }
    if((x2+2)<=8 && (y2-1)>=1)
    {
        v2.pb(mp(x2+2,y2-1));
    }
    if((x2-2)>=1 && (y2+1)<=8)
    {
        v2.pb(mp(x2-2,y2+1));
    }
    if((x2-2)>=1 && (y2-1)>=1)
    {
        v2.pb(mp(x2-2,y2-1));
    }
    if((x2+1)<=8 && (y2+2)<=8)
    {
        v2.pb(mp(x2+1,y2+2));
    }
    if((x2+1)<=8 && (y2-2)>=1)
    {
        v2.pb(mp(x2+1,y2-2));
    }
    if((x2-1)>=1 && (y2+2)<=8)
    {
        v2.pb(mp(x2-1,y2+2));
    }
    if((x2-1)>=1 && (y2-2)>=1)
    {
        v2.pb(mp(x2-1,y2-2));
    }

    for(ll i=0;i<v1.size();i++)
    {
        for(ll j=0;j<v2.size();j++)
        {
            if((v1[i].first == v2[j].first) && (v1[i].second==v2[j].second))
            {
                YES;
                return;
            }
        }
    }
    NO;





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

    while(t--)
    {
        body();
    }
    return 0;



}


