#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    unordered_set<int> vis;
    int cnt = 1;
    vector<int> nums(n);
    for(int i = 0;i<n;i++)cin>>nums[i];
    sort(nums.begin(),nums.end());
    vector<int> preSum(nums.begin(),nums.end());
    for(int i = 1;i<n;i++)preSum[i] = preSum[i-1] + nums[i];
    int i = 0;
    while(i<n)
    {
        if(vis.find(cnt) != vis.end())
        {
            cnt++;
            continue;
        }
        vis.insert(cnt);
        vis.insert(preSum[i]);
        cnt++;
        i++;
    }
    return 0;
}