class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        priority_queue<double>pq;

       
       double sum=0;

        for(int j=0;j<k;j++){
                sum+=nums[j];
            }
            double avg=sum/k;
            pq.push(avg);
        for(int i=1;i+k<=nums.size();i++){

           sum-=nums[i-1];
           sum+=nums[i+k-1];
            double avg=sum/k;
            pq.push(avg);
        }
        return pq.top();
    }
};