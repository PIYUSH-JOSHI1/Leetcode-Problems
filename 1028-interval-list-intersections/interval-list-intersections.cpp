class Solution {
public:
   vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
    vector<vector<int>> ans;
    for (int i = 0, j = 0; i < A.size() && j < B.size(); A[i][1] < B[j][1] ? ++i : ++j)
        if (int l = max(A[i][0], B[j][0]), h = min(A[i][1], B[j][1]); l <= h)
            ans.push_back({l, h});
    return ans;
}
};