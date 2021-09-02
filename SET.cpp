#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    set<int>st;
    set <int>:: iterator it;

    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        st.insert(a);
    }
    for(it =st.begin();it!=st.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    int x;
    cin >> x;
    if(st.find(x)!=st.end())///find show ,one it has or not
        cout << "YES" << endl;
        else cout << "NO" << endl;
    st.erase(st.find(x));
    for(it=st.begin();it!=st.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    cout << st.size() << endl;

}
int main()
{
    solve();
    main();
    return 0;
}

