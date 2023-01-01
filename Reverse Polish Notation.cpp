// #define int double 
class Solution {
public:
    int evalRPN(vector<string>& tokens)
     {
         stack<double> ans;
         for(int i=0;i<tokens.size();i++)
         {
             if(tokens[i]=="+")
             {
                 int v1=ans.top();ans.pop();int v2=ans.top();ans.pop();
                int val=v1+v2;
                ans.push(val);
             }
             else if(tokens[i]=="-")
             {
                int v1=ans.top();ans.pop();int v2=ans.top();ans.pop();
                int val=v2-v1;
                ans.push(val);
             }
             else if(tokens[i]=="*")
             {
                 double v1=ans.top();ans.pop();double v2=ans.top();ans.pop();
                double val = (v1 * v2) ;
                ans.push(val);
             }
             else if(tokens[i]=="/")
             {
                 int v1=ans.top();ans.pop();int v2=ans.top();ans.pop();
                int val=v2/v1;
                ans.push(val);
             }
             else
             {
                 int num = stoi(tokens[i]);
                 ans.push(num);
             }
         }
         return ans.top();
    }
};
//problem link : https://leetcode.com/problems/evaluate-reverse-polish-notation/
