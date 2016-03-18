#include<iostream>
#include<stack>
#include<math.h>


using namespace std;
int base(int x , int y)
{
    int r = 0;
    int i = 0;
    int product;
    while(x != 0)
    {
        for(int j = 0 ; j<=i;j++)
        {
            if(j==0)
            {
                product = 1;
            }
            else{
                    product*=10;
            }

        }
        r= r + (x%y)*product;
       // cout<<r<<"tet"<<endl;
        i++;
        x = x/y;
    }
    //cout <<r <<endl;
    return r;
}
int zeroes(int r)
{
    cout <<r<<endl;
    int count = 0;
    while(r > 0)
    {
        if(r%10 == 0)
        {
            count++;
            r = r/10;
        }
        else
        {
            break;
        }
    }
    return count;

}

int main()
{
    int arr[100000];
    int n , ans, r , qno , q;
    long p = 1;
    cin >> n;
    for(int i =0; i < n;i++)
    {
        cin >> arr[i];
        p *=arr[i];
    }
    //cout << p<<endl;
    cin >> qno;
    for(int i = 0 ; i < qno ;i++)
    {
        cin >> q;
        r =  base(p , q);
      //  cout << r<<endl;
        ans = zeroes(r);
        cout<<ans<<endl;
    }

    return 0;
}
