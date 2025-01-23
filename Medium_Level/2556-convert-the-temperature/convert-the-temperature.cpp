class Solution {
public:
    vector<double> convertTemperature(double c) {
        double k,f;
        k=c+273.15;
        f=c*1.80+32.00;
        vector <double> arr={k,f};
        return arr;
    }
};