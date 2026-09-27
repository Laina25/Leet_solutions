class Solution {
public:
    string getHint(string secret, string guess) {
        int n = secret.size();
        int bulls = 0, cows = 0;
        vector<int> secretCount(10, 0);
        vector<int> guessCount(10, 0);

        for (int i = 0; i < n; i++) {
            if (secret[i] == guess[i]) {
                bulls++;
            } else {
                secretCount[secret[i] - '0']++;
                guessCount[guess[i] - '0']++;
            }
        }

        for (int d = 0; d < 10; d++) {
            cows += min(secretCount[d], guessCount[d]);
        }

        return to_string(bulls) + "A" + to_string(cows) + "B";
    }
};