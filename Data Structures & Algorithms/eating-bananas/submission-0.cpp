class Solution {
public:
    long long fun(vector<int>& piles, int speed) {
        long long h = 0;
        for (int i = 0; i < piles.size(); i++) {
            h += piles[i] / speed;
            if (piles[i] % speed != 0) {
                h++;
            }
        }
        return h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1; 
        int high = *max_element(piles.begin(), piles.end()); 

        while (low <= high) {
            int mid = (high+low)/ 2; 
            long long hours = fun(piles, mid); 
            if (hours > h) {      
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return low;
    }
};