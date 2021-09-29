#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define ins insert
#define sz size()
#define unordered_set uns
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


int expo(int a,int b)
{
    if(b==0)
        return 1;
    if(b%2==0)
    {
        int res= expo(a,b/2);
        return (res*res);
    }
    return (a*expo(a,b-1));
}


bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i*i <= n; i++)
        if (n % i == 0)
            return false;

    return true;
}

ll fac(ll n)
{
    if(n==1)
    {
        return n;
    }
    else
        return fac(n-1)*n;
}
bool isSqr(int n)
{
    int y=sqrt(n);
    return y*y==n;
}

/*int spf[100000];
void primeFact(int n)
{

    for(int i=1; i<=n; i++)
    {
        spf[i]=i;
    }

    for(int i=2; i*i<=n; i++)
    {
        if(spf[i]==i)
        {
            for(int j=i*i; j<=n; j+=i)
            {
                if(spf[j]==j)
                {
                    spf[j]=i;
                }
            }
        }
    }
    vector<int> v;
    while(n!=1)
    {
        v.pb(spf[n]);
        n=n/spf[n];

    }

    for(auto c:v)
    {
        cout<<c<<" ";
    }

}

void Check(int n)
{
    vector<int> v;
    while(n!=1)
    {
        v.pb(spf[n]);
        n=n/spf[n];

    }

    for(auto c:v)
    {
        cout<<c<<" ";
    }
    cout<<"\n";
}
*/
ll Phi(ll n)  //if n is prime Phi(n)=n-1
{
    int cnt=0;
    for(ll i=1; i<n; i++)
    {
        if(__gcd(i,n)==1)
        {
            cnt++;
        }
    }
    return cnt;
}
int cntDiv(int n)
{
    int divisor = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (i * i == n)
        {
            divisor += 1;
        }
        else if (n % i == 0)
        {
            divisor += 2;
        }
    }
    return divisor;
}
int main()
{
    optimize();
    // int t;cin >> t; while(t--){

    int A;
    cin >> A;
    cout<< A;

}
