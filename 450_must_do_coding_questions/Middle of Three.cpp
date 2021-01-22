class Solution{
  public:
    int middle(int A, int B, int C){
        if(A>B && A>C)
        {
            if(B>C)
            return B;
            else
            return C;
        }
        else if(B>A && B>C)
        {
            if(A>C)
            return A;
            else
            return C;
        }
        else if(C>A && C>B)
        {
            if(A>B)
            return A;
            else
            return B;
        }
    }
};