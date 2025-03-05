// 2579. Count Total Number of Colored Cells
class Solution {
public:
    long long coloredCells(int n) {
        return 2LL * n * (n - 1) + 1;
    }
};