class Solution {
    public boolean isPalindrome(int x) {
        String numStr = Integer.toString(x);


        if(numStr.charAt(0) == '-') return false;

        else {
            int i = 0;
            int j = numStr.length() - 1;
            
            while(i < j) {
                if(numStr.charAt(i) != numStr.charAt(j)) return false;

                i++;
                j--;
            }
        }

        return true;
    }
}