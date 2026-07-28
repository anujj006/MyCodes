class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {                //simple leetcode problem

        for (auto &row : image) {
            reverse(row.begin(), row.end());                                            //reversing the array

            for (int &x : row)                                                          
                x = 1 - x;                                                              //inverting the array
        }

        return image;                                                                    //returning the array
    }
};
//Commited by Anuj Sen