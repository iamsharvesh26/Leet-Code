class Solution{

public:
    long long interchangeableRectangles(vector<vector<int>>&r) {
        unordered_map<double,int>m;
        long long pairCount=0;
        for(auto i : r )
{
    double ratio = (double)i[0]/i[1];
    pairCount = pairCount + m[ratio];
    m[ratio]=m[ratio]+1;

}        
    return pairCount;
    }
};