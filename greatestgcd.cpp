#include<iostream>

using namespace std;

int main()
{
    long int A , B , C ,t;
    cin>>t;
    for(int i =0 ; i<t ;i++)
    {
        cin >> A >> B;
    while (A% B!= 0)
    {
        C = A%B;
        A = B; //Note that to find the GCD for more numbers,
 //take the GCD of each
        B = C;
    } // additional number and the result, B, from the last set.
    cout << B<< endl;
    }

    return 0;
}
