#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int n;
    while(cin >> str >> n)
    {
        int reminder = 0;
        string str2;
        for(int i = 0; i < str.size(); ++i)
        {
            str2.push_back(((reminder * 10 + (str[i] - '0')) / n) + '0');
//            cout << (rm * 10 + (str[i] - '0')) / n<<endl;
            reminder = (reminder * 10 + (str[i] - '0')) % n;
        }

        int x = 0;
        while(str2[x] == '0'){
//            cout << str2[x] << endl;
            str2.erase(str2.begin(),str2.begin()+1);

        }
        cout << str2 << endl;
    }
    return 0;
}
