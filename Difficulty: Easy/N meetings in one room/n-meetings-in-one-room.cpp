class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    static bool cmp(pair<int,int>a,pair<int,int>b){
        return a.second<b.second;
    }
    int maxMeetings(vector<int>& start, vector<int>& end) {
        // Your code here
        vector<pair<int,int>>meeting;
        
        for(int i=0;i<start.size();i++){
            pair<int,int>p;
            p.first=start[i];
            p.second=end[i];
            
            meeting.push_back(p);
        }
        sort(meeting.begin(),meeting.end(),cmp);
        
        int count=1;
        int meetingEnd=meeting[0].second;
        for(int i=1;i<meeting.size();i++){
            if(meeting[i].first>meetingEnd){
                count++;
                meetingEnd=meeting[i].second;
            }
        }
        return count;
    }
};