#include<bits/stdc++.h>
#include<iostream.h>
using namespace std;
typedef pair<long long int,long long int> pa;
#define pb push_back
#define  MAX 400009
#define ll long long int
#define ld long double
long long int mod=998244353;
long long int MOD=1e9+7;
long long int INF=1e18;
ld PI=3.14159265358979323846264338327950;
ll dx[]={0,1,0,-1};
ll dy[]={-1,0,1,0};
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll arr[6];
        for(ll i=0;i<6;i++)
        {
            cin>>arr[i];
        }
        if((arr[0]+arr[1]+arr[2])>(arr[3]+arr[4]+arr[5]))
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
    }
}
