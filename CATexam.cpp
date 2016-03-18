#include<bits/stdc++.h>


using namespace std;

int main()
{
    int t;
    int d;
    int w;
    long long int p;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>d;
        cin>>p;
        if(p==0)
            w = 1;
        switch(d)
        {
        case 1:
            w = 1;
            break;
        case 2:
                if((p-1)%4 == 0)
                    w = 2;
                else if((p-2)%4 == 0)
                    w =4;
                else if((p-3)%4 == 0)
                    w =8;
                else if((p-4)%4==0)
                    w =6;
            break;
        case 3:
            if((p-1)%3==0)
                w =3;
            else if((p-2)%3 == 0)
                w =9;
            else if((p-3)%3 == 0)
                w = 1;
            break;
        case 4:
            if((p-1)%2 == 0)
                w = 4;
            else if((p-2)%2 == 0)
                w = 16;
            break;
        case 5:
            w = 5;
            break;
        case 6:
            w = 6;
            break;
        case 7:
            if((p-1)%4 == 0)
                    w = 7;
                else if((p-2)%4 == 0)
                    w =9;
                else if((p-3)%4 == 0)
                    w =3;
                else if((p-4)%4==0)
                    w =1;
                break;
        case 8:
                if((p-1)%4 == 0)
                    w = 8;
                else if((p-2)%4 == 0)
                    w =4;
                else if((p-3)%4 == 0)
                    w =2;
                else if((p-4)%4==0)
                    w =6;
                break;
        case 9:
             if((p-1)%2 ==0)
                w = 9;
            else if((p-2)%2 ==0)
                w = 1;
            break;
        }
        cout<<w<<endl;
    }
}
