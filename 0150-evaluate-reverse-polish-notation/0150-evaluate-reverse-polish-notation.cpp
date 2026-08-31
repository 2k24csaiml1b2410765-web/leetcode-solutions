class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int n=tokens.size();
        int i=0;
        int res;
        while(i<n){
           
            if(tokens[i]=="+" || tokens[i]=="-"||tokens[i]=="*" || tokens[i]=="/"){
                int num1=st.top();
                st.pop();
                int num2=st.top();
                st.pop();
                if(tokens[i]=="+"){
                    res=num1+num2;
                    st.push(res);
                }
                else if(tokens[i]=="-"){
                    res=num2-num1;
                    st.push(res);
                }
                else if(tokens[i]=="*"){
                    res=num1*num2;
                    st.push(res);
                }
                else{
                    res=num2/num1;
                    st.push(res);
                }
               

            }
            else{
                st.push(stoi(tokens[i]));
            }
            i++;

        }
        return st.top();
        
    }
};