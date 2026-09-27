class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
       int rounds = minutesToTest / minutesToDie;
        int states = rounds + 1;  // each pig can end up in one of (rounds+1) outcomes
        
        int pigs = 0;
        long long combinations = 1;
        while (combinations < buckets) {
            combinations *= states;
            pigs++;
        }
        
        return pigs; 
    }
};