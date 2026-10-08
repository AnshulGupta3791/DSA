class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
	int m = matrix.size();
    int n = matrix[0].size();
    vector <int> v;
    int minr = 0;
    int maxr = m -1;
    int minc = 0;
    int maxc = n - 1;
    int count = 0;
    int totEle = m * n;
    while(minr <= maxr && minc <= maxc){
        for (int j = minc ; j <= maxc && count < totEle ; j++){
            v.push_back(matrix[minr][j]);
            count++;
        }
        minr++;
        for (int i = minr ; i <= maxr && count < totEle ; i++ ){
            v.push_back(matrix[i][maxc]);
            
            count++;
        }
        maxc--;
        for (int j = maxc ; j >= minc && count < totEle ; j-- ){
            v.push_back(matrix[maxr][j]);
            
            count++;
        }
        maxr--;
        for (int i = maxr ; i >= minr && count < totEle ; i--){
            v.push_back(matrix[i][minc]);
            count++;
        }
        minc++;
    }
    return v;

        
    }
};