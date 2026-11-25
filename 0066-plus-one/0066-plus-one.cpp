class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size()-1;
        if(digits[i] < 9){
            digits[i]++;
            return digits;           
        }else{
            
            while(digits[i]==9){
                
                if(i > 0){
                    digits[i] = 0;
                    // digits[i-1]++;
                    i--;
                }
                if(i==0){
                    if(digits[i] == 10){
                        digits[i] = 1;
                        digits.push_back(0);
                        digits.push_back(0);
                        break;
                    }else if(digits[i] < 9){
                        digits[i]++;
                        break;
                    }
                    digits[i] = 1;
                    digits.push_back(0);
                }else if(i > 0 && digits[i] < 9){
                    digits[i]++;
                    break;
                }
                
            }
        }

        
        return digits;
        
    }
};