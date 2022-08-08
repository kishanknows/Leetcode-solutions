class Solution {
public:
    vector<vector<int>> triangle{{1},{1,1}};
    
    vector<vector<int>> generate(int numRows) {        
        if(numRows==1){
            return {{1}};
        }
        else if(numRows==2){
            return triangle;
        }
        for(int i=2;i<numRows;i++){
            vector<int> temp;
            for(int j=0;j<triangle[i-1].size()-1;j++){
                int val=triangle[i-1][j]+triangle[i-1][j+1];
                temp.push_back(val);
            }
            temp.push_back(1);
            temp.insert(temp.begin(),1);
            triangle.push_back(temp);
        }
        return triangle;
        
    }
};
