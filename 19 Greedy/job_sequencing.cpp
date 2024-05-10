#include <bits/stdc++.h>
using namespace std;
struct Job
{
    int deadline;
    int profit;
};

bool comparator(Job &first, Job &second)
{
    return first.profit > second.profit;
}
void sequenceJobs(vector<Job> jobs){
    sort(jobs.begin(),jobs.end(),&comparator);
    int maxDeadline=0;
    for(int i=0;i<jobs.size();i++){
        if(jobs[i].deadline>maxDeadline){
            maxDeadline=jobs[i].deadline;
        }
    }
    int slots[maxDeadline]={0};
    int maxProfit=jobs[0].profit;
    slots[jobs[0].deadline-1]=1;
    for(int i=1;i<jobs.size();i++){
        Job job=jobs[i];
        if(slots[job.deadline-1]==0){
            slots[job.deadline-1]=1;
            maxProfit+=job.profit;
        }
    }
    cout<<"Maximum Profit :: "<<maxProfit;
}
int main()
{
    vector<Job> jobs;
    int n;
    cout << "Enter total Items :: ";
    cin >> n;
    Job obj;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Deadline of Job ::";
        cin >> obj.deadline;
        cout << "\n Enter profit value of Job ::";
        cin >> obj.profit;
        jobs.push_back(obj);
    }
    sequenceJobs(jobs);
    return (0);
}