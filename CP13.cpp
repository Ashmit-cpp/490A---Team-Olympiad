#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getIndex(vector<int> v, int K)
{
    auto it = find(v.begin(), v.end(), K);

    // If element was found
    if (it != v.end())
    {
        // calculating the index of K
        int index = it - v.begin();
        return index+1;
    }
    else {
        // If the element is not present in the vector
        cout << "-1" << endl;
    }
}


int main()
{
    vector<int> g1;
    int n,ele=0,k,l;

    cin>>n;
    for (int i = 0; i <n; i++)
    {
        cin>>ele;
        g1.push_back(ele);
    }

    int cn1 = count(g1.begin(), g1.end(), 1);
    int cn2 = count(g1.begin(), g1.end(), 2);
    int cn3 = count(g1.begin(), g1.end(), 3);

    l = min(cn1,cn2);
    k = min(l,cn3);
    cout<<k<<endl;

    for (int i = 0; i < k ; i++)
    {
        int v1 = getIndex(g1, 1);
        int v2 = getIndex(g1, 2);
        int v3 = getIndex(g1, 3);

        g1[v1-1]=0;
        g1[v2-1]=0;
        g1[v3-1]=0;

        cout<<v1<<" "<<v2<<" "<<v3<<endl;
    }

    return 0;
}