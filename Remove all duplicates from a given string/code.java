class Solution {
    String removeDuplicates(String str) {
        String S="";
        HashSet<Character> HS=new HashSet<>();
        for(int i=0;i<str.length();i++){
            if(!(HS.contains(str.charAt(i)))){
            S+=str.charAt(i);
            HS.add(str.charAt(i));
            }
        }
        return(S);
    }
}
