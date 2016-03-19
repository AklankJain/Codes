#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, n ,threshold;
    long long int element;
    int r =0;
    int freq[11];
    int flag2 =0;

    float exep[11];
    cin>>t;
    exep[1] =.3010 ;
    exep[2] =.1760 ;
    exep[3] =.1238 ;
    exep[4] =.090 ;
    exep[5] =1.58/20 ;
    exep[6] = 1.34/20;
    exep[7] =1.16/20 ;
    exep[8] =1.02/20 ;
    exep[9] =0.92/20 ;

    for(int i =0;i<t;i++)
    {
        flag2 =0;
        for(int i =1;i<11;i++)
        {
            freq[i] =0;
        }
        cin >>n;
        for(int j=0;j<n;j++)
        {
            cin>>element;
            while(element > 0)
            {
                r = element%10;
                element = element/10;
            }
            switch(r)
            {
            case 1:
                freq[1]++;
                break;
            case 2:
                freq[2]++;
                break;
            case 3:
                freq[3]++;
                break;
            case 4:
                freq[4]++;
                break;
            case 5:
                freq[5]++;
                break;
            case 6:
                freq[6]++;
                break;
            case 7:
                freq[7]++;
                break;
            case 8:
                freq[8]++;
                break;
            case 9:
                freq[9]++;
                break;
            }
        }
        cin >> threshold;
//        for(int k=0;k<=9;k++)
//        {
//            cout<<freq[k]<<" ";
//        }
        cout<<endl;
        for(int k =1;k<=9;k++)
        {

            if(freq[k]*threshold < exep[k]*n || freq[k]/threshold > exep[k]*n)
            {
                cout<<k<<endl;
                flag2 = 1;
                break;

            }

        }
        if(flag2 == 0)
        {
            cout<<"-1"<<endl;
        }

    }

    return 0;
}
