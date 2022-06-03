#include <iostream>

using namespace std;

int main()
{
    int n, temp;
    cin >> n;
    temp = n%3;
    n=n-temp;//去掉餘數
    temp = n/3;//取能被3整除的個數
    cout << (3+n) * temp/2 << endl;
    return 0;
}
