class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalgas= 0;
        int totalcost = 0;
        int current = 0; //current gas
        int lowest_index = 0;
        int n = gas.size();
        for(int i = 0; i<n; i++){
            totalgas += gas[i];
            totalcost += cost[i];
            current = current + gas[i] - cost[i];
            if (current < 0){
                lowest_index = i+1;
                current = 0;
            }
        }
        if(totalgas >= totalcost){
            return lowest_index;
        }
        return -1;
    }
};