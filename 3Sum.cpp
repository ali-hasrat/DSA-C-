//Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threesum(vector<int> nums)
{
    int n = nums.size();
    vector<vector<int>> ans;
    set<vector<int>> v1;
    
    for (int i = 0; i < n-2; i++)
    {
        for (int j = i+1; j < n-1; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                if (nums[i] + nums[j] + nums[k] == 0 && i!=j && j!=k && k!=i)
                {
                    v1.insert({nums[i],nums[j],nums[k]});
                }
            }
        }
    }
    for(auto it : v1)
    {
        ans.push_back(it);
    }
    return ans;
}

int main()
{
    vector<int> arr = {0,-1,-1,1,2,-2};
    vector<vector<int>> ans;
    ans = threesum(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<"[";
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<"]"<<"\n";
        
    }
    
    return 0;
}
