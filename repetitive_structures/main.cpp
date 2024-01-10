#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int y=pow(10,n);

    while(n>=0)
        cout << y;
    if(n=0)
        cout << 10;

    return 0;
}
