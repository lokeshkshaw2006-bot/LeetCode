class Solution {
public:
    long long sumAndMultiply(int n) {
        // string str = to_string(n);
        // string s = "";
        // long long sum = 0;
        // for(int i=0; i<str.size(); i++){
        //     char ch = str[i];
        //     if(ch != '0'){
        //         s = s + ch;
        //         sum = sum + (ch - '0');
        //     }
        // }
        // if(s.empty()){
        //     return 0;
        // }
        // long long num = stoi(s);
        long long sum = 0;
        long long num = 0;
        long long m = 1;
        do{
            int rem = n % 10;
            if(rem != 0){
                num = num + rem*m;
                sum = sum + rem;
                m *= 10;
            }
            n/=10;
        }while(n!=0);

        return num * sum;
    }
};