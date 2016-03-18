#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int fibo(long int n)
{
    long int a , b , c , j;
    a =1 ;
    b =1;
    j = 3;
  //  cout<<n<<endl;
    while(j<=n)
    {
      //  cout<<"I am here"<<endl;
        c = a+b;
        a = b;
        b = c;
        j++;
    }
    //cout << "hello"<<b<<endl;
    return b;

}
int main()
{
    int t;
    long int sum=0 , a , b , n;
    int arr[4];
    cin >> t;
    for(int i = 0 ; i< t ;i++)
    {
        sum =0;
        cin >> a >> b;
        if(a == 0)
        {
            a = 1;
        }
        n = fibo(a);
        arr[0] = n;

        sum = arr[0];
        n = fibo(a+1);
        arr[1] = n;
        sum += arr[1];
        for(int j = a+2 ; j<=b;j++)
        {
            arr[2] = arr[1] + arr[0];
           // cout << sum<<"check"<<endl;
            sum += arr[2]%1000000007;
            arr[0] = arr[1];
            arr[1] = arr[2];
        }
        cout <<sum<<endl;
    }
    return 0;
}
