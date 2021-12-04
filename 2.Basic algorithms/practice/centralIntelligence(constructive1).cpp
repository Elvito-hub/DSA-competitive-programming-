#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ull unsigned long long
#define ll long long
#define vll vector<ll>
#define pll pair<ll, ll>
#define pint pair<int, int>

#define all(a) (a).begin(), (a).end()
#define sz(a) ((int)(a).size())
#define pb push_back
#define mp make_pair
#define fo(i, n) for (i = 0; i < (n); ++i)

#define print1(x) cout << x << endl
#define print2(x, y) cout << x << " " << y << endl
#define print3(x, y, z) cout << x << " " << y << " " << z << endl
#define test  \
    ll t;     \
    cin >> t; \
    while (t--)
#define read(a, n)              \
    for (int i = 0; i < n; i++) \
        cin >> a[i];
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
ll count0 = 0, count1 = 0;

int main()
{
    fastio;
    test
    {
        ll n, k, locknum;
        char ch;
        cin >> n >> k >> locknum;
        vector<char> charcode(n);
        vector<ll> charvalue(n);

        for (ll i = 0; i < n; i++)
            cin >> charcode[i] >> charvalue[i];

        map<ll, char> alpcode;
        for (auto i = 0; i < n; ++i)
            alpcode[charvalue[i]] = charcode[i];

        vector<ll> arr(k);
        for (auto i = 0; i < k; i++)
            cin >> arr[i];

        vector<ll> spe(4);
        for (auto i = 0; i < 4; ++i)
            cin >> spe[i];

        vector<char> spe1 = {'@', '#', '%', '&'};
        vector<pair<ll, char>> spepair(4);
        for (ll i = 0; i < 4; i++)
            spepair[i] = make_pair(spe[i], spe1[i]);

        sort(all(spepair));
        map<ll, set<ll>> val;

        for (auto i : arr)
        {
            for (auto j : charvalue)
            {
                if (i % j == 0)
                    val[j].insert(i);
            }
        }

        unsigned ll minval = ULONG_MAX, maxvalue = 0;
        ll minidx = -1, maxidx = -1;
        ll actmin = 0, actmax = 0;
        for (auto i : val)
        {
            auto itr = i.second.begin();
            auto itr1 = i.second.rbegin();
            if (minval > i.first + *itr)
            {
                minval = i.first + *itr;
                minidx = i.first;
                actmin = *itr;
            }
            if (maxvalue < i.first + *itr1)
            {
                maxvalue = i.first + *itr1;
                maxidx = i.first;
                actmax = *itr1;
            }
        }
        minval += spepair[0].first;
        maxvalue += spepair.back().first;
        if (maxvalue - minval > locknum && maxidx >= 0 && minidx >= 0)
            print1("WOOF");
        else
            print1("HECK");
    }
    return 0;
}

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int T;
//	cin>>T;
//	while(T--)
//	{
//		int n,k,locknum;
//		cin>>n>>k>>locknum;
//		map<char,int> m;
//		while(n--)
//		{
//			int x;
//			char c;
//			cin>>c>>x;
//			m[c]=x;
//		}
//		int arr[k];
//		for(int i=0;i<k;i++)
//		   cin>>arr[i];
//		int symbols[4],maxs=0,mins=1000000001;
//		for(int i=0;i<4;i++){
//		  cin>>symbols[i];
//		  if(symbols[i]>maxs) maxs=symbols[i];
//		  if(symbols[i]<mins) mins=symbols[i];
//	}
//		  
//		map<char,int>::iterator p=m.begin();
//		int lev1,lev2=1000000001;
//		while(p!=m.end())
//		{
//			int d=p->second;
//			for(int i=0;i<k;i++)
//			{
//				if(arr[i]%d==0)
//				{
//					int newlev1=d+arr[i]+maxs;
//					if(newlev1>lev1)
//					{
//						lev1=newlev1;
//					}
//				}
//			}
//			for(int i=0;i<k;i++)
//			{
//				if(arr[i]%d==0)
//				{
//					int newlev2=d+arr[i]+mins;
//					if(newlev2<lev2)
//					 lev2=newlev2;
//				}
//			}
//			p++;
//		}
//		int dif=lev1-lev2;
//		if(dif>locknum)
//		  cout<<"WOOF \n";
//		else
//		  cout<<"HECK \n";
//	}
//}
