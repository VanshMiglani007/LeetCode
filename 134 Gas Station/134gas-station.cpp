class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start = 0;
        int tank = 0;
        int totalgas=0;
        int totalcost=0;
        for (int i = 0; i < gas.size(); i++){
            totalgas+=gas[i];
        }
        for (int i = 0; i < cost.size(); i++){
            totalcost+=cost[i];
        }
        if(totalgas<totalcost) return -1;

        for (int i = 0; i < gas.size(); i++) {
            tank = tank + (gas[i] - cost[i]);

            if (tank < 0) {
                start = i + 1;
                tank = 0;
            }
        }
        return start;
    }
};