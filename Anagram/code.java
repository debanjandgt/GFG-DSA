class Solution
{    
    //Function is to check whether two strings are anagram of each other or not.
    public static boolean isAnagram(String a,String b)
    {
        
        HashMap<Character,Integer> mp=new HashMap<>();
        for(int i=0;i<a.length();i++){
            char ch=a.charAt(i);
            if(!(mp.containsKey(ch)))
            mp.put(ch,1);
            else
            mp.put(ch,mp.get(ch)+1);
        }
        for(int i=0;i<b.length();i++){
            char ch=b.charAt(i);
            if((mp.containsKey(ch))&&(mp.get(ch)>=1))
            mp.put(ch,mp.get(ch)-1);
            else
            return(false);
        }
        return(true);
        
    }
}
