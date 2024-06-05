class Solution {
    public List<String> commonChars(String[] words) {
        int minCnt[]=new int[26];
        Arrays.fill(minCnt, Integer.MAX_VALUE);
        int i,j,n=words.length;
        for(i=0;i<n;i++){
            int cnt[]=new int[26];
            Arrays.fill(cnt,0);
            for(j=0;j<words[i].length();j++){
                cnt[words[i].charAt(j)-'a']++;
            }
            for(j=0;j<26;j++){
                minCnt[j]=Math.min(minCnt[j],cnt[j]);
            }
        }
        List<String>ans= new ArrayList<>();;
        for(i=0;i<26;i++){
            while(minCnt[i]>0){
                char temp=(char)(i+'a');
                ans.add(String.valueOf(temp));
                minCnt[i]--;
            }
        }
        return ans;
    }
}