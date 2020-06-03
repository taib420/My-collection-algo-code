?* ********Bismillah Hir-rahmanir Rahim************
            ********Allahu Akber**********
            *******Mustain Murtaza Taib******
            
            
    */
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,k,reminder=0;
    k = 1;
    cin>>a>>b;
    if(a > b) swap(a,b);
    while(k)
    {
        reminder = b % a;
        if(reminder == 0) reminder = a;
        b = a;
        a = reminder;
        //cout<<"a="<<a<<endl;
        if(b % a == 0) k = 0;
        else k = 1;
    }
    cout<<"GCD means go.sha.go : ";
    cout<<reminder<<endl;
    return 0;
}
