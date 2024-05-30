

//Write your code here
class Calculator
{
    public:
    int n,p;
    int power(int a, int b)
    {
        if( a < 0 || b < 0 )
        {
            throw invalid_argument("n and p should be non-negative");
        }
        return pow(a,b);
    }
};


