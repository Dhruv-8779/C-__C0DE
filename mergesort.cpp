#include <bits/stdc++.h>
using namespace std;

vector<int> v1 = {2, 3, 5, 7,    6, 8, 19};
vector<int> merge(vector<int> arr, int l, int m, int h)
{
    vector<int> ans(arr.size());
    int i = l;
    int end1 = m;


    int j = m + 1;
    int end2 = h;
    int k = 0;

    while (i <= end1 && j <= end2)
    {
        if (arr[i] <= arr[j])
        {
            ans[k++] = arr[i++];
        }
        else
        {
            ans[k++] = arr[j++];
        }
    }
    while (i <= end1)
    {
        ans[k++] = arr[i++];
    }
    while (j <= end2)
    {
        ans[k++] = arr[j++];
    }
    return ans;
}
int main()
{
    vector<int> y = merge(v1, 0, 3, 6);
    for (int i=0; i<=6; i++)
        cout <<y[i]<< " " << endl;
    return 0;
}