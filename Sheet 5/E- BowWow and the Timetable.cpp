#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s; cin >> s;

    string binary;
    int train;

    binary = "1";
    train = 0;

    while(binary < s && binary.length() <= s.length())
    {
        train++;
        binary += "00";
    }

    cout << train << endl;

    return 0;
}