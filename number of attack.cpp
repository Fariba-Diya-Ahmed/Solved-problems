/*
There is an enemy with stamina A. Every time you attack the enemy, its stamina reduces by B.At least how many times do you need to attack the enemy to make its stamina 00 or less?
[ 1≤A,B≤10^18 and A and B are integers. ]
*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a,b,count ;
    cin>>a>>b;

    count= (a+b-1)/b;              // for counting the number of attacks
    cout<<count<<endl;
}
