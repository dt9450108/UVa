#include<iostream>
using namespace std;
int f91(int n)
{
    if(n>=101)
        return n-10;
    else
        return f91(f91(n+11));
}
int main()
{
    int n;
    while(cin >> n && n<=1000000 && n!=0)
        cout << "f91(" << n << ") = " << f91(n) << endl;
    return 0;
}