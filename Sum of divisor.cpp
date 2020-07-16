#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mxn = 10000000;
vector < int > prime;
static ll total,vagun;
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
void prime_factor_divisor(ll n)
{
    ll sq = sqrt(n);
    total = 1;
    ll counn;
    vagun = 1;
    for(ll i=0; prime[i]<=sq; ++i)
    {
        ll cp = prime[i];
        counn = 0;
        if(n%cp == 0)
        {
            while(n%cp == 0)
            {
                n /= cp;
                counn++;
            }

            printf("%lld^%lld , ",cp,counn);
            total *= pow(cp,(counn+1)) - 1 ;
            vagun *= (cp - 1);
            //cout<<"total = "<<total<<endl;
        }

    }
    if(n != 1){
        printf("%lld^1\n",n);
        total *= n*n - 1;
        vagun *= (n - 1);
        //cout<<"total = "<<total<<endl;
    }
    //cout<<"total = "<<total<<endl;
    total = total / vagun;
}

int main()
{
    sieve();
    ll n;
    while(cin>>n)
    {
        prime_factor_divisor(n);
        cout<<"Sum of divisor (SOD) = "<<total<<endl;
    }
    return 0;
}


