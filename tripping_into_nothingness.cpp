#include<iostream>
#include<set>
#include<list>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;


int main()
{
    int s , q , last = 0, flag = 0 ;
    long a , max =0 ;

    cin >> s >> q;
    int arr[q];
    for(int k =0 ; k<q ; k++)
    {
        arr[k] = 0;
    }

    for(int i =0 ; i < q ;i++)
    {
        max =0;
        cin >> a;
        if(s <= a)
        {
            for(int j = 1 ; j<=s ;j++)
            {
                if(s%j == 0 && a%j == 0)
                {
                    if(j > max)
                    max = j;
                }
            }

        }
        else
        {
            for(int j = 1 ; j<=a ;j++)
            {
                if((s%j == 0) && (a%j == 0))
                {
                    if(j > max)
                    {
                        max = j;
                    }
                }
            }
        }
        flag = 0;

       for(int k =0 ; k < q ;k++)
       {
           if(max == arr[k])
           {
               cout << "-1"<<endl;
               flag = 1;
               break;
           }
       }
       if(flag == 0)
       {
           arr[i] = max;
       cout << max<<endl;
       }


    }
return 0 ;
}
