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
		
        int a=0, b=1;
        int c;
        for(int i=2; i<=n ; i++)
        {
             c = a+b;
             a=b;
            b=c;
            //c=b;
        }

        return c;

        /*vector<int> v(n+1, 0);
        v[0] = 0;
        v[1] = 1;

        for(int i=2; i<=n; i++)
        {
            v[i] = v[i-1] + v[i-2];
        }

        return v[n];*/

       /* helper(v, 2, n);

        return v[n];*/

        /*if(n<=1)
            return n;

        return fib(n-1) + fib(n-2);*/
        
    }
};