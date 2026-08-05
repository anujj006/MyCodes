class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {            //this is a easy problem of leetcode
        for(int i = 0; i < names.size(); i++){
            for(int j = i + 1; j < names.size(); j++){                                  //worst time complexity just bubble sorted the array of height and name 
            if(heights[i] < heights[j]){                                                //will try better approach
                swap(names[i], names[j]);
                swap(heights[i], heights[j]);
            }
            }
        }
        return names;
    }
};
//Commited by Anuj Sen