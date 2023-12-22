class Solution{
public:
    vector<int> maxMeetings(int n, vector<int> &S, vector<int> &F) {
    vector<pair<int, pair<int, int>>> meet_time;
    for (int i = 0; i < n; i++) {
        meet_time.push_back({F[i], {S[i], i + 1}});
    }

    // Sort the meetings based on their end times
    sort(meet_time.begin(), meet_time.end());

    vector<int> meet;
    meet.push_back(meet_time[0].second.second);
    int end = meet_time[0].first;
    
    for (int i = 1; i < n; i++) {
        if (meet_time[i].second.first > end) {
            meet.push_back(meet_time[i].second.second);
            end = meet_time[i].first;
        }
    }
    //sort the meeting numbers as the question says
    sort(meet.begin(),meet.end());
    return meet;
}
};
