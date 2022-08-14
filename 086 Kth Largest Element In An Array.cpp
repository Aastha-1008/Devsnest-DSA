int solve(int n, vector<int> nums, int k){
//CODE HERE 
    priority_queue<int>pq;
    for(int i = 0 ; i< nums.size() ; i++){
        pq.push(nums[i]);
    }
    while(k!=0 && !pq.empty()){
        k--;
        if(k==0)return pq.top();
        pq.pop();
    }
    return -1;
}
