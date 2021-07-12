#include<bits/stdc++.h>
using namespace std;

string add(string x, string y)
{
    int sizee1 = x.size();
    int sizee2 = y.size();
    if(sizee1 < sizee2)
    {
//         int temp;
//         string temp2;
//         temp = sizee1;
//         sizee1 = sizee2;
//         sizee2 = temp;
//         temp2 = x;
//         x = y;
//         y = temp2;
        swap(sizee1,sizee2);
        swap(x,y);
        
    }

    string add;
    reverse(x.begin(),x.end());
    reverse(y.begin(),y.end());
    int carry = 0;
    for(int i = 0; i < sizee2; ++i)
    {
        int sum = ((x[i] - '0') + (y[i] - '0') + carry);
        add.push_back(sum % 10 + '0');
        carry = sum / 10;
    }
    for(int i = sizee2; i < sizee1; ++i)
    {
        int sum = (x[i] - '0') + carry;
        add.push_back(sum % 10 + '0');
        carry = sum / 10;
    }
    if(carry)
        add.push_back(carry + '0');
    reverse(add.begin(),add.end());
    return add;
}

int main()
{
    string str, str2;
    while(cin >> str >> str2)
    {
        cout << "sum = " << add(str, str2) << endl;
    }
    return 0;
}
//Uva - 424
