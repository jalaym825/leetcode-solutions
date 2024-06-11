class Solution {
    public int[] relativeSortArray(int[] arr1, int[] arr2) {
        HashMap<Integer, Integer> mp = new HashMap<Integer, Integer>();
        for(int i = 0; i < arr1.length; i++) {
            mp.put(arr1[i], mp.getOrDefault(arr1[i], 0) + 1);
        }

        int[] ans = new int[arr1.length];
        int k = 0;

        for(int i = 0; i < arr2.length; i++) {
            int n = mp.get(arr2[i]);
            for(int j = 0; j < n; j++) {
                ans[k] = arr2[i];
                k++;
            }
            mp.remove(arr2[i]);
        }

        List<Integer> remaining = new ArrayList<>();
        for (Map.Entry<Integer, Integer> entry : mp.entrySet()) {
            for (int i = 0; i < entry.getValue(); i++) {
                remaining.add(entry.getKey());
            }
        }

        Collections.sort(remaining);

        for (int num : remaining) {
            ans[k] = num;
            k++;
        }

        return ans;
    }
}