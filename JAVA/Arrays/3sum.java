// 3Sum Problem
//Using HashMap and HashSet
//Time Complexity: O(n^2)
//Space Complexity: O(n)
import java.util.*;

class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        Map<Integer, Integer> freq = new HashMap<>();
        Set<List<Integer>> res = new HashSet<>();

        for (int x : nums) freq.put(x, freq.getOrDefault(x, 0) + 1);

        if (freq.getOrDefault(0, 0) >= 3)
            res.add(Arrays.asList(0, 0, 0));

        List<Integer> neg = new ArrayList<>();
        List<Integer> pos = new ArrayList<>();

        for (int x : freq.keySet()) {
            if (x < 0) neg.add(x);
            else if (x > 0) pos.add(x);
        }

        for (int i : neg) {
            for (int j : pos) {
                int k = -i - j;
                if (freq.containsKey(k)) {
                    if ((k == i || k == j) && freq.get(k) < 2) continue;
                    if (k == i && k == j && freq.get(k) < 3) continue;
                    List<Integer> triplet = Arrays.asList(i, j, k);
                    Collections.sort(triplet);
                    res.add(triplet);
                }
            }
        }

        for (int x : freq.keySet()) {
            if (freq.get(x) >= 2) {
                int y = -2 * x;
                if (y != x && freq.containsKey(y)) {
                    List<Integer> triplet = Arrays.asList(x, x, y);
                    Collections.sort(triplet);
                    res.add(triplet);
                }
            }
        }

        return new ArrayList<>(res);
    }
}