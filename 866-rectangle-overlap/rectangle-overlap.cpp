class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int x1_p1 = rec1[0];
          int y1_p1 = rec1[1];
          int x2_p1 = rec1[2];
          int y2_p1 = rec1[3];

          int x1_p2 = rec2[0];
          int y1_p2 = rec2[1];
          int x2_p2 = rec2[2];
          int y2_p2 = rec2[3];

          if(x1_p1 == x1_p2 && y1_p1 == y1_p2 && x2_p1 == x2_p2 && y2_p1 == y2_p2)
          return true;
          if(x1_p1 >= x2_p2 || y1_p1 >= y2_p2 || x2_p1 <= x1_p2 || y2_p1 <= y1_p2)
          return false;

          return true;

        
    }
};