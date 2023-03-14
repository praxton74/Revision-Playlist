class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n)
    {
        flowerbed.insert(flowerbed.begin(),0);
        flowerbed.push_back(0);                                          // Adding 0 in the array in position 0
        int c=0;
        for(int i=1;i<flowerbed.size()-1;i++)
        {
            if(flowerbed[i]==0 && flowerbed[i-1]==0 && flowerbed[i+1]==0)
            {
                c++;
                i++;
            }
        }
        if(c>=n)
        {
            return true;
        }
        return false;
    }
};
