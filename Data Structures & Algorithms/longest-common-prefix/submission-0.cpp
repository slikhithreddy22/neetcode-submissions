class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        int index = 0;
        int smallest = strs[0].length();
        if (n == 0){
            return strs[0];
        }
        for (int i = 1;i<n;i++){
            if (strs[i].length() < smallest){
                index = i;
                smallest = strs[i].length();
            }
        }
        n = smallest;
        string finalAns = strs[index];
        for (string str:strs){
            
            string ans = "";
            for(int i = 0;i<n;i++){
                if (finalAns[i] == str[i]){
                    ans+=str[i];
                }else{
                    break;
                }
            }
            finalAns = ans;
            n = finalAns.length();
        }
        return finalAns;
    }
};