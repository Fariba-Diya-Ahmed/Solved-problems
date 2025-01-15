/*
You are given a binary string s of length n. Your task is to generate a new binary string T of same length such that
each corresponding character of T is different from the character at the same position in s.

1100 -> 0011
100 -> 011
*/

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        string binaryString, flippedString;
        cin>>binaryString;

        flippedString = binaryString;

        for(int i =0;i<n;i++)
        {
            if(binaryString[i]=='1') flippedString[i]='0';
            else if(binaryString[i]=='0') flippedString[i]='1';
        }

            cout<<flippedString<<endl;
    }
}
