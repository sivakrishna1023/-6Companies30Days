class Solution {
public:
     void solution(int index,int num,int val, vector<vector<int>>&ans,vector<int>& temp,vector<int>& arr)
     {
         if(temp.size()>=num or index > arr.size())
         {
             if(val==0 and temp.size()==num)
             ans.push_back(temp);

             return ;
         }
         if(arr[index]<=val)
         {
              temp.push_back(arr[index]);
              solution(index+1,num,val-arr[index],ans,temp,arr);
              temp.pop_back();
         }
         solution(index+1,num,val,ans,temp,arr);
       
     }
    vector<vector<int>> combinationSum3(int k, int n) 
    {
        vector<vector<int>> ans;
        vector<int> temp;
        vector<int> arr;
        for(int i=0;i<9;i++) arr.push_back(i+1);
       solution(0,k,n,ans,temp,arr);
        return ans;
    }
};

//problem link: https://leetcode.com/problems/combination-sum-iii/
