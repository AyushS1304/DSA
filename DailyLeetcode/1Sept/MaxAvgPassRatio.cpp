//Time Complexity:O(N+Extrastudents∗Log(N))
//Space Complexity:O(n)
class Solution {
public:
#define P pair<double,int>
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        int n=classes.size();
        priority_queue<P>pq;
        for(int i=0;i<n;i++){
            double ratio=(double)classes[i][0]/classes[i][1];
            double newRatio=(double)(classes[i][0]+1)/(classes[i][1]+1);
            double delta=newRatio-ratio;
            pq.push({delta,i});
        }
        while(extraStudents--){
            auto curr=pq.top();
            pq.pop();
            double delta=curr.first;
            int idx=curr.second;

            classes[idx][0]++;
            classes[idx][1]++;

            double ratio=(double)classes[idx][0]/classes[idx][1];
            double newRatio=(double)(classes[idx][0]+1)/(classes[idx][1]+1);
            double newdelta=newRatio-ratio;
            pq.push({newdelta,idx});

        }

        double result=0.0;
        for(int i=0;i<n;i++){
            result+=(double)classes[i][0]/classes[i][1];
        }
        return result/n;

    }
};