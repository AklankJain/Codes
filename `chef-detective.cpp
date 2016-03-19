#include <bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(false)
#define mp make_pair
#define pb push_back
#define re return
#define fi first
#define se second
#define sz(x) ((int) (x).size())
#define all(x) (x).begin(), (x).end()
#define sqr(x) ((x) * (x))
#define sqrt(x) sqrt(abs(x))
#define fill(x,y) memset(x,y,sizeof(x))
#define rep(i, begin, end) for(__typeof(begin) i = (begin); i != (end) + 1 - 2 * ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define rep_stl(i, begin, end) for(i = begin; i != end; i++)
#define MAX 10000000
#define MOD 1000000007
#define endl "\n"
#define in scanf
#define out printf
//#define TIMER cout<<endl<<"Time Taken : "<<(double)(clock()-t1)/CLOCKS_PER_SEC<<" seconds."<<endl
//#define FILE freopen("test.in", "r", stdin); freopen("test.out", "w", stdout)
typedef long long ll;
typedef long double ld;
typedef double D;
typedef vector<int> vi;
typedef vector<long> vl;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef vector<pii> vpii;
typedef vector<string> vs;
typedef vector<vi> matrix;
typedef vector<vi> vii;
template<class T> T _abs(T x) { re (x > 0) ? x : -x; }
template<class T> T _min(T a, T b) { re (a > b) ? b : a; }
template<class T> T _max(T a, T b) { re (a > b) ? a : b; }
clock_t t1 = clock();
set<int> yo;
int main(){
	FAST;
	#ifdef FILE
		FILE;
	#endif

    ll n;
    cin>>n;
    int value;
    int arr[n+1];
    for(int i=0;i<n+1;i++)
    {
        arr[i] =0;
    }
    for(int i=1;i<n+1;i++)
    {
        cin>>value;
        arr[value] = 1;
    }
    for(int i =1;i<n+1;i++)
    {
        if(arr[i] == 0)
        cout<<i<<" ";
    }

	#ifdef TIMER
		TIMER;
	#endif
	return 0;
}
