#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,a,b,flag=0;
    cin>>x;
    if(x%2==0){a=(x/2)-1;b=x-a;}
    else {a=x/2;b=x-a;}
    //Co-prime condition

    start:
        {
    if(__gcd(a, b)!=1){flag=1;}
        }
    if(flag==1&&a>0&&b>0){a-=1;b+=1;flag=0;goto start;}
    else cout<<a<<" "<<b;
}
