#include<bits/stdc++.h>

using namespace std;

 long long arr[1001];
 int k ,n;
 long long maxi , sum;


int main()
{
    cin >>n>>k;
    for(int i=0;i<k;i++)
    {
        sum =0;
     for(int j=0;j<n;j++)
     {
         cin >> arr[j];
     }

    //sort(arr , arr + n , greater<int>());
    int k=1;
    int j = 0 , m = n-1;
    long long sum1=0 , sum2=0;

    for(int j=0;j<n/2;j++)
    {
        sum1+=arr[j];
    }
    for(int j = n/2 ;j<n;j++)
    {
        sum2+= arr[j];
    }


    if(sum > maxi)
    {
        maxi = sum;
    }
    }

    cout << maxi<<endl;;

    return 0;
}
