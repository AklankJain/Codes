#include<iostream>
#include<set>
#include<list>
#include<vector>
#include<algorithm>
#include<math.h>


using namespace std;


int main()
{
    int t , s , k;
    int arr[100000];
    long max_sum =0, sum =0;
    cin >> t;
    for(int i =0 ; i<t ; i++)
    {
        cin >> s;
        for(int j =0 ; j<s ; j++)
        {
            cin >> arr[j];
        }
        for(int j = 0; j<s ; j++)
        {
            for(k = j ; k < s-1 ; k++)
            {
                sum += arr[j] + arr[j+1];
                if(sum > max_sum)
                {
                    max_sum = sum;
                }
            }
            cout << max_sum <<"test" <<endl;
        }
        cout << max_sum<<endl;
    }
    return 0;
}
