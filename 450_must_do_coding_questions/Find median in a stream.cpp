class Solution
{
    public:
    //Function to insert heap.
    priority_queue<int>maxheap;
    priority_queue<int,vector<int>,greater<int>>minheap;
    double median;
    void insertHeap(int &x)
    {
        if(maxheap.size()==0 && minheap.size()==0)
        {
            maxheap.push(x);
            median=x;
        }
        else if(maxheap.size()>minheap.size())
        {
            if(x<median)
            {
                minheap.push(maxheap.top());
                maxheap.pop();
                maxheap.push(x);
            }
            else
            {
                 minheap.push(x);
            }
        }
        else if(maxheap.size()<minheap.size())
        {
            if(x<median)
            {
                maxheap.push(x);
            }
            else
            {
                 maxheap.push(minheap.top());
                 minheap.pop();
                 minheap.push(x);
            }
        }
        else
        {
            if(x<median)
            {
                maxheap.push(x);
            }
            else
            {
                 minheap.push(x);
            }
        }
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
        
    }
    
    //Function to return Median.
    double getMedian()
    {
        if(maxheap.size()>minheap.size())
        {
            median=maxheap.top();
            return maxheap.top();
        }
        else if(maxheap.size()<minheap.size())
        {
             median=minheap.top();
            return minheap.top();
        }
        else
        {
            median=(maxheap.top()+minheap.top())/2;
            return median;
        }
    }
};
