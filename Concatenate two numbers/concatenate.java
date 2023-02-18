class Solution 
{ 
    long countPairs(int N, int X, int numbers[]) 
    { 
        int count=0;
        HashMap<String,Integer> map=new HashMap<>();
        for(int i=0;i<numbers.length;i++){
            String a=Integer.toString(numbers[i]);
            map.put(a,map.getOrDefault(a,0)+1);
        }
        String word=Integer.toString(X);
        for(int i=1;i<word.length();i++)
        {
            String f=word.substring(0,i);
            String e=word.substring(i);
            if((map.containsKey(f))&&(map.containsKey(e))){
                if(f.equals(e))
                count+=map.get(f)*((map.get(e))-1);
                else
                count+=map.get(f)*map.get(e);
            }
        }
        return(count);
    }
} 
