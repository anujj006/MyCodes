class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {           //this is a easy problem of leetcode
        sort(g.begin(), g.end());                                       //sort  the array so we have to traverse only once
        sort(s.begin(), s.end());
        int c = 0;                                                      //initialize all variables
        int i = 0;                                                      //pointers
        int j = 0;
        while(i < g.size() && j < s.size()){                            //while loop
            if(s[j] >= g[i]) {                                          //if size is greater or equal to greed
                c++;
                i++;
                j++;
        } else{
            j++;
        }
    }
    return c;
}
};
//Commited by Anuj Sen