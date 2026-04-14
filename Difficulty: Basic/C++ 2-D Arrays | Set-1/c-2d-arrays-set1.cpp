vector<vector<int>> transpose(int a[][M], int n) {
    vector<vector<int>> res(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            res[j][i]=a[i][j];
        }
    }
    return res;
    
    
}
