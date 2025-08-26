class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        double marea = 0, md = 0;
        for (auto it : dimensions) {
            double x = sqrt(it[0] * it[0] + (it[1] * it[1]));
            if (x >= md) {
                if (x == md) {
                    marea = max(marea, double(it[0] * it[1]));
                } else {
                    marea = it[0] * it[1];
                }
                md = x;
            }
        }
        return int(marea);
    }
};