#include<bits/stdc++.h>
using namespace std;
unsigned long long int gcd(unsigned long long int a,unsigned long long int b)
{
    if(b == 0)
        return a;
    if(a % b == 0)
        return b;
    return gcd(b , a % b);
}

int main()
{
    unsigned long long int a , b,g ,l;
    int t;
    cin >> t;
    while(t--)
    {
        cin >> a>> b;
         g = gcd(a,b);
         l = (a * b) / g;
         cout<<"gcd = "<<g<<" , lcm = "<<l<<endl;
    }
    return 0;
}
