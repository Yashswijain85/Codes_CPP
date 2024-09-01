#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    int min = a<b?a:b;
    for(int i=min;i>=2;i--)
    {
        if(a%i == 0 and b%i == 0)
            return i;
    }
    return 1;
}

int main()
{
    int n;
    int count;
    cin >> n;
    for(int x=1;x<n;x++)
    {
        if(gcd(x,n)==1)
        {
            cout << x << " ";
            count++;
        }
    }
    cout << "\nCount : " << count;
}
