class Solution {
public:
    bool isValid(string s) {
        int n=s.length();
        char c1,c2,c3;
        stack<char>st;
        int i=0;
        while(i<n){
            st.push(s[i]);
            if(st.size()>=3){
                c3=st.top();
                st.pop();
                c2=st.top();
                st.pop();
                c1=st.top();
                st.pop();
            
            if(!(c1=='a'&& c2=='b' && c3=='c')){
                st.push(c1);
                st.push(c2);
                st.push(c3);
            }
            }
            i++;

        }
        if(st.empty()==true){
            return true;
        }
        return false;
    }
};
