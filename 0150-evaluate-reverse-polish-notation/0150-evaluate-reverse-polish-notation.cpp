class Solution {
public:
    int evalRPN(vector<string>& nums) {
        stack<int> st;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!="+" && nums[i]!="-" && nums[i]!="*" && nums[i]!="/" )
            {
                int a=stoi(nums[i]);
                st.push(a);
            }
            else 
            {
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                if(nums[i]=="+")
                {
                    st.push(b+a);
                }
                else if(nums[i]=="-")
                {
                    st.push(b-a);
                }
                else if(nums[i]=="*")
                {
                    st.push(b*a);
                }
                else
                {
                    st.push(b/a);
                }

            }
        }
        return st.top();
    }
};