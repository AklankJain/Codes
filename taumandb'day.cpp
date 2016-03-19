#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    long long int x , y , z, b ,w;
    long long int cost = 0;
    cin >> t;
    for(int i = 0;i<t;i++)
    {
        cost = 0;
        cin >> b >> w;
        cin >> x >> y >> z;
        if(x + z < y)
        {
            cost = b*x + w*(x+z);
        }
        else if(y+z < x)
        {
            cost = b*(y+z) + w*y;
        }
        else
        {
            cost = b*x + w*y;
        }
        cout << cost<<endl;
    }

    return 0;
}
