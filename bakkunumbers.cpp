#include<bits/stdc++.h>

using namespace std;
int main()
{

    long long p1 , p2 , t , l , r , no,no1 ,no2,no3 , num;
    float   prob1, prob2, prob3,prob;

    cin >> p1>>p2;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        cin >> l>>r;
       // cout << l<<r<<endl;;
        num = r-l +1;
        no1 = (r/p1) - ((l-1)/p1);
        prob1 = (float)no/(float)num;
        //cout << no <<num<<endl;

        no2 = (r/p2) - ((l-1)/p2);
        prob3 = (float)no/(float)num;
        //cout << no <<num<<endl;

        no3 = (r/(p1*p2)) - ((l-1)/(p2*p1));
        prob3 = (float)no/(float)num;

        no = no1+no2-no3;
        prob = (float)no / (float)num;
        printf("%.6f\n" , prob);


    }

    return 0;
}
