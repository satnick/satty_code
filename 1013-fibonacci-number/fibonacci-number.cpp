class Solution {
public:

void helper(vector<int>& v, int i, int n)
{
	if(i== n+1)
		return ;
	v[i] = v[i-1] + v[i-2];
	helper(v, i+1, n);
}

    int fib(int n) {
        if (n<=1)
		    return n;
		
        int i=0, j=1;
        vector<int> v(n+1, 0);
        v[0] = 0;
        v[1] = 1;

        helper(v, 2, n);

        return v[n];

        /*if(n<=1)
            return n;

        return fib(n-1) + fib(n-2);*/
        
    }
};