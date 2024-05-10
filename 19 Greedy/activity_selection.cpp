#include <bits/stdc++.h>
using namespace std;

struct Activity
{
    int startTime;
    int endTime;
};

bool comparator(Activity &first, Activity &second)
{
    return first.endTime < second.endTime;
}

vector<Activity> maxActivities(vector<Activity> activities)
{
    sort(activities.begin(), activities.end(), &comparator);
    vector<Activity> result;
    result.push_back(activities[0]);
    int count=0;
    for (int i = 1; i < activities.size(); i++)
    {
        if (activities[i].startTime >=activities[count].endTime)
        {
            result.push_back(activities[i]);
            count++;
        }
    }
    return result;
}

int main()
{
    vector<Activity> activities;
    int n;
    cin >> n;
    Activity obj;
    for (int i = 0; i < n; i++)
    {
        cin >> obj.startTime;
        cin >> obj.endTime;
        activities.push_back(obj);
    }
    vector<Activity> res = maxActivities(activities);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i].startTime << "\t" << res[i].endTime << endl;
    }
    return (0);
}