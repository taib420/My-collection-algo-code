#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mxn = 10000000;
vector < int > prime;
static int list_fact[mxn],sizee;
int findd[mxn+10] = {0};
void sieve()
{

    findd[1] = findd[0] = 1;
    for(int i=2; i*i<=mxn; ++i)
    {
        if(findd[i] == 0)
        {
            for(int j=i+i; j<=mxn; j += i)
                findd[j] = 1;
        }
    }
    for(int i=1; i<=mxn; ++i)
    {
        if(findd[i] == 0)
            prime.push_back(i);
    }
}
void prime_factor(ll n)
{
    sizee = 0;
    ll sq = sqrt(n);
    for(ll i=0; prime[i]<=sq && i < prime.size(); ++i)// and ificiant way is ------ for(i = 0; prime[i] * prime[i] <= n && i < prime.size(); ++i) // time kom lage arki
    {
        ll cp = prime[i];
        if(n%cp == 0)
        {
            while(n%cp == 0)
            {
                list_fact[++sizee] = cp;
                n /= cp;
            }
        }
    }
    if(n != 1)
        list_fact[++sizee] = n ;
}

int main()
{
    sieve();
    ll n;
    while(cin>>n)
    {
        prime_factor(n);
        for(ll i=1; i<=sizee; ++i)
        {
            cout<<list_fact[i]<<endl;
        }
        memset(list_fact,0,sizeof(list_fact));
    }
    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mxn = 1e7;
vector < int > prime;
int list_fact[mxn],sizee;
bool findd[mxn+10] = {0};
void sieve()
{
    findd[1] = findd[0] = 1;
    for(int i = 4; i <= mxn; i += 2)
        findd[i] = 1;
    for(int i = 3; i * i <= mxn; i += 2)
    {
        if(findd[i] == 0)
        {
            for(int j = i*i; j <= mxn; j += i)
                findd[j] = 1;
        }
    }
//    for(int i=2; i*i<=mxn; ++i)
//    {
//        if(findd[i] == 0)
//        {
//            for(int j=i+i; j<=mxn; j += i)
//                findd[j] = 1;
//        }
//    }
    prime.push_back(2);
    for(int i = 3; i <= mxn; i += 2)
    {
        if(findd[i] == 0)
            prime.push_back(i);
    }
}
void prime_factor(ll n)
{
    sizee = 0;
    ll sq = sqrt(n);
    for(ll i = 0; prime[i] <= sq && i < prime.size(); ++i)// and ificiant way is ------ for(i = 0; prime[i] * prime[i] <= n && i < prime.size(); ++i) // time kom lage arki
    {
        if(findd[n] == 0)
            break;
        ll cp = prime[i];
        if(n%cp == 0)
        {
            while(n%cp == 0)
            {
                list_fact[++sizee] = cp;
                n /= cp;
            }
        }
    }
    if(n != 1)
        list_fact[++sizee] = n ;
}

int main()
{
    sieve();
    ll n;
    while(cin>>n)
    {
        prime_factor(n);
        for(ll i = 1; i <= sizee; ++i)
        {
            cout<<list_fact[i]<<endl;
        }
        memset(list_fact,0,sizeof(list_fact));
    }
    return 0;
}
