#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
    int t;
    long long int a , b;
    int x , y;
    int cnt = 0;

    cin >> t;
    for(int i =0;i<t;i++)
    {
        cnt = 0;
        cin >> a >>b;
        x = ceil(sqrt(a));
        for(long long int j = x ; j*j <= b ; j++)
        {
            cnt++;
        }
        cout << cnt<<endl;
    }

    return 0;
}
