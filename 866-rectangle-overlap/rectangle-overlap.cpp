class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int x1_r1 = rec1[0];
          int y1_r1 = rec1[1];
          int x2_r1 = rec1[2];
          int y2_r1 = rec1[3];

          int x1_r2 = rec2[0];
          int y1_r2 = rec2[1];
          int x2_r2 = rec2[2];
          int y2_r2 = rec2[3];

          if(x1_r1 == x1_r2 && y1_r1 == y1_r2 && x2_r1 == x2_r2 && y2_r1 == y2_r2)
             return true;
          if(x1_r1 >= x2_r2 || y1_r1 >= y2_r2 || x2_r1 <= x1_r2 || y2_r1 <= y1_r2)
             return false;

          return true;

        
    }
};