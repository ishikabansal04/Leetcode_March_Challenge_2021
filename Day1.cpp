class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int maxcandies = (candyType.size() / 2);
        unordered_map<int, int>varities;
        for(int i=0;i< candyType.size(); i++){
            varities[candyType[i]]+=1;
        }
        int types = varities.size();
        if(types< maxcandies){
            return types;
        }
        else{
            return maxcandies;
        }
        
    }
};