class Solution {
private:
    double x, y, r;
    
public:
    Solution(double radius, double x_center, double y_center) :
            x(x_center), y(y_center), r(radius){}
    
    vector<double> randPoint() {
    double randR = sqrt(randDouble(0.0, 1.0)) * r; // CDF
    double randAngle = randDouble(0.0, 2.0 * M_PI);
    return {x + randR * cos(randAngle), y + randR * sin(randAngle)};    
    }
    private:
    double randDouble(double minDouble, double maxDouble){

        double randNum = (double)rand() / INT_MAX;
        return randNum * (maxDouble - minDouble) + minDouble;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(radius, x_center, y_center);
 * vector<double> param_1 = obj->randPoint();
 */