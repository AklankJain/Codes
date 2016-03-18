#include<bits/stdc++.h>

using namespace std;


int main()
{
    int d , l , v1 , v2;
    float t;
    cin >> d>>l>>v1>>v2;
    t = (float)(l-d)/(float)(v1+v2);
    printf("%.6f" , t);
    return 0;
}
