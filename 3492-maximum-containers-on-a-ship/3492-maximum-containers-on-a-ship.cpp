class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int capacityCell = maxWeight/w;
        if(capacityCell >= n*n) return n*n;
        return capacityCell;
        
    }
};