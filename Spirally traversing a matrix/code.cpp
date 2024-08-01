class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &matrix) {
        // code here
        vector<int> vec;
        int startX=0;
        int startY=0;
        int clock=0;
        int n=matrix.size();
        int m=matrix[0].size();
        
        int upLimit=0;
        int downLimit=n;
        int leftLimit=-1;
        int rightLimit=m;
        int looper=0;
        while(looper < m*n)
        {
                if(clock%4 == 0)
                {
                    if(startY < rightLimit)
                    {
                        vec.push_back(matrix[startX][startY++]);
                        looper++;
                    }
                    else {
                        clock++;
                        rightLimit--;
                        startY=rightLimit;
                        startX++;
                    }
                }
                else if(clock%4 == 1)
                {
                    if(startX < downLimit)
                    {
                        vec.push_back(matrix[startX++][startY]);
                        looper++;
                    }
                    else {
                        downLimit--;
                        startX=downLimit;
                        startY--;
                        clock++;
                    }
                }
                else if(clock%4 == 2)
                {
                    if(startY > leftLimit)
                    {
                        vec.push_back(matrix[startX][startY--]);
                        looper++;
                    }
                    else {
                        clock++;
                        leftLimit++;
                        startY=leftLimit;
                        startX--;
                    }
                }
                else if(clock%4 == 3)
                {
                    if(startX > upLimit)
                    {
                        vec.push_back(matrix[startX--][startY]);
                        looper++;
                    }
                    else {
                        clock++;
                        upLimit++;
                        startX=upLimit;
                        startY++;
                    }
                }
            }
        return vec;
    }
};
