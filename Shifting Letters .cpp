typedef long long ll;

class Solution {
public:
    
                                               //function that returns shifted char
    char shift(char a, ll n){
        ll i = a - 'a';
        i = (i+n)%26;
        return 'a' + i;
    }
    
    string shiftingLetters(string s, vector<int>& shifts) {
        
        int n = shifts.size();
        vector<ll> presum;             //int will overflow so take long long 
        
        for(auto x: shifts)
            presum.push_back(x);
        
        string ans = "";
        for(int i = n-2; i>=0; i--)
            presum[i]+= presum[i+1];
        
        for(int i = 0; i<n;i++)
            ans+= shift(s[i],presum[i]);
			
        return ans;        
    }
};
