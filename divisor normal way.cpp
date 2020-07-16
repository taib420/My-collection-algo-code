#include<bits/stdc++.h>
using namespace std;
static int divis[100000],sizee;
void divv(int n)
{
    int sq = sqrt(n);
     sizee = 0;
    for(int i=1; i<=sq; ++i)
    {
        if(n % i == 0)
        {
            if(i == n/i)
                divis[++sizee] = i;
            else
            {
                divis[++sizee] = i;
                divis[++sizee] = n/i;
            }
        }
    }
}

int main()
{
    int n;
    while(cin>>n)
    {
        divv(n);
        cout<<"Total divisor size = "<<sizee<<endl;
        for(int i=1; i<=sizee; ++i)
        {
            cout<<divis[i]<<endl;
        }
    }
}
