 public:
    int countSquares(int N)
    {
        double sqT = sqrt(N);
        if(ceil(sqT) == floor(sqT))
            return (int)sqT-1;
        return (int)sqT;
    }
};
