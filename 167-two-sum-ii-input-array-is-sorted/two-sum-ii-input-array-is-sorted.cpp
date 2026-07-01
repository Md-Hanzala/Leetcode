class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int index1=0;
        int index2=numbers.size()-1;
    while(index2>index1){
    if(numbers[index1]+numbers[index2]==target){
    return {index1 + 1, index2 + 1};
    }
    if(numbers[index1]+numbers[index2]>target)
    index2--;
    else if(numbers[index1]+numbers[index2]<target)
    index1++;
};
return {};
};
};