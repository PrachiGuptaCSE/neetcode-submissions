#include <cstdint>

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;
        for (int i = 0; i < 32; i++) {
            result = (result << 1) | (n & 1);  // take n's last bit, append to result
            n >>= 1;                            // drop the bit we just used
        }
        return result;
    }
};
