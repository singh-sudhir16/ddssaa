class NumberContainers {
public:
    
    unordered_map<int , int> indxToNum;
    unordered_map<int , priority_queue<int , vector<int> , greater<>> > numToIndx;
    NumberContainers() {
        
    }
    
    void change(int index, int number) {
         indxToNum[index] = number;
         numToIndx[number].push(index);
    }
    
    int find(int number) {
        auto& pq = numToIndx[number];

        while(!pq.empty()){
            int i = pq.top();
            if(indxToNum[i]==number)
                return i;
            pq.pop();
        } 
        return -1;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */