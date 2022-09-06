class Solution{
public:
    long long findMinSum(vector<int> &A,vector<int> &B,int N){
        long long sum = 0 ;
        sort( A.begin(), A.end() );
        sort( B.begin(), B.end() );
        for(int i = 0 ; i < N ; i++)
        {
            sum += abs( A[i] - B[i] ) ;
        }
        return sum ;
    }
};