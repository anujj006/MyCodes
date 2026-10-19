import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Leetcode2089 {
    public List<Integer> targetIndices(int[] nums, int target) {
        Arrays.sort(nums);
        ArrayList<Integer> ans = new ArrayList<>();
        for(int i = 0; i < nums.length; i++){
            if(nums[i] == target) ans.add(i);
        }

        return ans;
    }
}
//Comitted By Anuj Sen
