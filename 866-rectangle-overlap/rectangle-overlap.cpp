class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
            if(rec1[2] <= rec2[0] || rec1[0] >= rec2[2] || rec1[1] >= rec2[3] || rec1[3] <= rec2[1]) return false;
            else return true;
    }
};

//agar dono rectangle k axis overlap kr rha h. toh jaruri ni h ki dono rec intersect kre. hm check krenge ki rec1 ka x rec2 k x se chota h and same goes with y. agar ye condition follow hota h toh overlapping ni ho rhi. wrna ho rha h. 