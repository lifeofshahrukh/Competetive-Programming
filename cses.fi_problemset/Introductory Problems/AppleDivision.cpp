#include <bits/stdc++.h>
using namespace std;

#define iof freopen("input.txt","r", stdin) ;freopen("output.txt","w", stdout) ;
#define io ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define mod 1000000007
#define vec vector<long long>
#define pb push_back
#define ll  long long
#define f(b) for(int i=0;i<b;i++)
#define f2(b) for(int j=0;j<b;j++)
#define f3(b) for(int k=0;k<b;k++)
#define endl '\n'
#define pi pair<int,int>
#define INF 1000000000000000001

long long pow(long long x, long long y){ if (y == 0) return 1; else if (y % 2 == 0) return pow(x, y / 2) * pow(x, y / 2);else return x * pow(x, y / 2) * pow(x, y / 2);}
long long dig(long long n) {return floor(log10(n) + 1);}

int main()
{
	io
	#define int long long

	int n,sum=0,s1=0;
	cin>>n;
	int arr[n+1]={0};
	f(n){cin>>arr[i];sum+=arr[i];}

    int opsize = pow(2, n);

    vector<vec> v1;
    vec v;

    for (int counter = 1; counter < opsize; counter++)
    {
        for (int j = 0; j < n; j++)
        {

            if (counter & (1<<j)) v.pb(arr[j]);
        }
        v1.pb(v);
        v.clear();
    }

    int ans = INF,t;

    for(auto it:v1)
    {
        for(auto itr:it)
        {
            s1+=itr;
        }

    t = abs(s1 - (sum- s1));

    ans=min(ans,t);
    s1=0;
    }

    cout<<ans;

}
