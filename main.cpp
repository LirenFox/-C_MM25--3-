#include <iostream>

using namespace std;

int main()
{
    int n, temp;
    cin >> n;
    temp = n%3;
    n=n-temp;//�h���l��
    temp = n/3;//����Q3�㰣���Ӽ�
    cout << (3+n) * temp/2 << endl;
    return 0;
}
