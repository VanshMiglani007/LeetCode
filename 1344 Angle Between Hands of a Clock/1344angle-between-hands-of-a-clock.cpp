class Solution {
public:
    double angleClock(int hour, int minutes) {
        double minhand=minutes*6.0;
        double hrhand=(hour % 12) * 30.0 + minutes*0.5;
        double diff=abs(hrhand-minhand);

        return min(diff,360.0-diff);
    }
};