#include<iostream>
using namespace std;

//BruteForce Method
vector<int> findDuplicates(vector<int>& nums) {
        if(nums.empty())return {};
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]!=nums[j])continue;
                else{
                    ans.push_back(nums[i]);
                    break;
                }
            }
        }
        return ans;
    }

// By Sorting Array

vector<int> findDuplicates(vector<int>& nums) {
        if(nums.empty())
        return {};

        vector<int>ans;
        sort(begin(nums),end(nums));
        int s = nums[0];

        for(int i=1;i<nums.size();i++)
        {
            if(!(s^nums[i]))
            {
                {
                    ans.push_back(nums[i]);
                    i+=1;
                }
                if(i<nums.size())s=nums[i];
                else 
                break;
            }
            else 
            s= nums[i];
        }
        return ans;
    }

//Efficient Way by making elements negative

vector<int> findDuplicates(vector<int>& nums) 
{
        if(nums.empty())
        return {};

        vector<int>ans;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[abs(nums[i])-1]<0)
               ans.push_back(abs(nums[i]));
        nums[abs(nums[i])-1]=-nums[abs(nums[i])-1];
        }
        return ans;
}



int main()
{

    
    
    return 0;
}