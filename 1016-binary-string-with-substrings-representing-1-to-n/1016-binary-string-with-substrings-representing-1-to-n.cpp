class Solution {
public:
    bool queryString(string s, int n) {
       for(int i=1;i<=n;i++){
            string x;
            int num=i;
            while(num){
                x.push_back('0'+num%2);
                num/=2;
            }
            reverse(x.begin(),x.end());
            if(s.find(x)==string::npos) return false;
        }
        return true; 
    }
};