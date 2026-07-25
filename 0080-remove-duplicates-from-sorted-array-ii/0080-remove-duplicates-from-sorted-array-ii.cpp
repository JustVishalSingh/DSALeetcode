class Solution {
public:
int removeDuplicates(vector<int> &arr)
{
    int i = 0, j = 1;
    int count = 1;
    while (j < arr.size())
    {
        if (arr[i] == arr[j]){
            count++;
            if (count > 2)
            {
                arr.erase(arr.begin() + j);
            }
            else{
                j++;
            }
        }
        else
        {
            i = j;
            j++;
            count=1;
        }
    }
    return arr.size();
}
};