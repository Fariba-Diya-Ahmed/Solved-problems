/*
Let xyz denote 3-digit integer whose digits are x,y,z from left to right.
Given a 3-digit integer abc none of whose digits is 0 , find abc + bca + cab.
*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int abc;
    cin>>abc;

    int a = abc/100 ;
    int b = (abc%100)/10 ;
    int c = (abc%100)%10 ;

    int sum = 111*(a+b+c) ;

    cout<<sum<<endl ;
}
