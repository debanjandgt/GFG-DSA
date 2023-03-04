

//User function Template for Java


class Compute {
    public String isSubset( long a1[], long a2[], long n, long m) {
        HashMap<Long,Integer> mp=new HashMap<>();
        int count=0;
        for(int i=0;i<a1.length;i++){
            if(mp.containsKey(a1[i]))
            {
                mp.put(a1[i],mp.get(a1[i])+1);
            }
            else
            mp.put(a1[i],1);
        }
        for(int i=0;i<a2.length;i++){
            if(mp.containsKey(a2[i])&&(mp.get(a2[i])!=0)){
                count++;
                mp.put(a2[i],mp.get(a2[i])-1);
            }
        }
        if(count==a2.length)
        return("Yes");
        else    
        return("No");
    }
}
