/*   ********Bismillah Hir-Rahmanir Rahim**********
            ********Allahu Akber********
             *********Taib*********
             
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,k,reminder=0,lcm;
    k = 1;
    cin>>a>>b;
    if(a > b) swap(a,b);
    int x = a, y = b;
    while(k)                  // Fast get gcd
    {
        reminder = b % a;
        if(reminder == 0) reminder = a;
        b = a;
        a = reminder;
        //cout<<"a="<<a<<endl;
        if(b % a == 0) k = 0;
        else k = 1;
    }
    cout<<"GCD means go.sha.go : "<<reminder<<endl;
    lcm = (x*y) / reminder;
    cout<<"LCM means lo.sha.go : "<<lcm<<endl;
    return 0;
}

