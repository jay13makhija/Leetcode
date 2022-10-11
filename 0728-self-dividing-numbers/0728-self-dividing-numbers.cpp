class Solution {
public:
    bool isSDN(int n){
        int digit;
        int num = n; 
        
        while(num != 0){
            digit = num % 10;
            
            if(digit == 0 || n % digit != 0){
                return false;
            }
            
            num /= 10;
        }
        
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        
        for(int i = left; i <= right; i++){
            
            if(isSDN(i)){
                ans.push_back(i);
            }
        }
        
        return ans; 
    }
};