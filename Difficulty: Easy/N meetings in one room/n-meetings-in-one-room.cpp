class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(vector<int>& start, vector<int>& end) {
        // Your code here
        
        vector<vector<int>> v(start.size(), vector<int>(2, 0));
        
        for(int i=0; i<start.size(); i++)
        {
            /*vector<int>meeting;
            meeting.push_back(start[i]);
             meeting.push_back(end[i]);
             v.push_back(meeting);*/
             v[i][0] = start[i];
             v[i][1] = end[i];
        }
        
        /*cout<<"before sorting: " <<endl;
         for(int i=0; i<start.size(); i++)
        {
            cout<<"start: " << v[i][0] <<" end: "<< v[i][1] << endl;
        }*/
        
        
        sort(v.begin(), v.end(),  [](const std::vector<int>& a, const std::vector<int>& b) {
        return a[1] < b[1]; // Descending order
    });//compareBySecondElement);
        
         /*cout<<"after sorting: " <<endl;
         for(int i=0; i<start.size(); i++)
        {
             cout<<"start: " << v[i][0] <<" end: "<< v[i][1] << endl;
        }*/
        
        
        int count=0;
        int lastEndTime = -1;
        for(int i=0; i<start.size(); i++)
        {
            if(v[i][0] > lastEndTime)
            {
                count++;
                lastEndTime = v[i][1];
            }
        }
        
        return count;
        
    }
    
    bool compareBySecondElement(const std::vector<int>& a, const std::vector<int>& b)
    {
        return a[1] < b[1]; // Sort ascending by second element
    }
};