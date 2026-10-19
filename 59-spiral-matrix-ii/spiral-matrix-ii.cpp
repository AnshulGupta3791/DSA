class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>> v(n, vector<int>(n));
    int minr = 0;
    int maxr = n -1;
    int minc = 0;
    int maxc = n - 1;
    int count = 0;
    int totEle = n * n;
    while(minr <= maxr && minc <= maxc){
        for (int j = minc ; j <= maxc && count < totEle ; j++){
            v[minr][j] = count + 1;
            count++;
        }
        minr++;
        for (int i = minr ; i <= maxr && count < totEle ; i++ ){
            v[i][maxc] = count + 1;
            
            count++;
        }
        maxc--;
        for (int j = maxc ; j >= minc && count < totEle ; j-- ){
            v[maxr][j] = count + 1;
            
            count++;
        }
        maxr--;
        for (int i = maxr ; i >= minr && count < totEle ; i--){
            v[i][minc] = count + 1;
            count++;
        }
        minc++;
    }
    return v;
    }
};