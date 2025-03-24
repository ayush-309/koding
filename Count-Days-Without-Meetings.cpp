// class Solution {
// public:
//     int countDays(int days, vector<vector<int>>& meetings) {
//         sort(meetings.begin(), meetings.end());
//         int last = 1, freeDays = 0;
//         if (meetings[0][0]>last) freeDays += meetings[0][0]-last;
//         for (int i=0; i<meetings.size(); i++){
//             //cout<<meetings[i][0]<<", "<<meetings[i][1]<<endl;
//             if (meetings[i][0]>last) freeDays += meetings[i][0]-last-1;
//             last = max(last, meetings[i][1]);
//         }
//         if (days>last) freeDays += days-last;
//         return freeDays;
//     }
// };

class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(), meetings.end());
        int last = 0, freeDays = 0;
        
        for (auto& meeting : meetings) {
            int start = meeting[0], end = meeting[1];

            // Count gap between last busy day and current meeting start
            if (start > last + 1) {
                freeDays += start - last - 1;
            }
            
            // Update last busy day
            last = max(last, end);
        }

        // Count free days after last meeting
        if (days > last) {
            freeDays += days - last;
        }
        
        return freeDays;
    }
};
