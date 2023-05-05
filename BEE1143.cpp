#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int a, i;
    cin >> a ;
    for(i=1; i<=a; i++)
    {
        cout << i << " "  << i*i << " " << i*i*i << endl;
    }
    return 0;
}