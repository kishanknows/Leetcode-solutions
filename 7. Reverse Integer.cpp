class Solution {
public:
    int reverse(int x) {
        int y=0;
        if(x<0){
            while(x){
                try{
                    if(y<INT_MIN/10)
                        throw y;
                    y = 10*y + x%-10;
                    
                }
                catch(int y){
                    return 0;
                }
                x = x/10;
            }
            return y;
        }
        while(x){
            try{
                if(y>INT_MAX/10)
                    throw y;
                y = 10*y + x%10;
                
            }
            catch(int y){
                return 0;
            }
            x = x/10;
        }
        return y;
    }
};
