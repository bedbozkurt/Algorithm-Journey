import java.util.*;

public class PartitionLabels {
    public List<Integer> partitionLabels(String s) {
        int[] lastOccurrence = new int[26];
        int start = 0;
        int end = 0;
        List<Integer> partitions = new ArrayList<>();
        for(int i = 0; i < s.length(); i++){
            lastOccurrence[s.charAt(i) - 'a'] = i; 
        }
        for(int i = 0; i < s.length(); i++){
            end = Math.max(end, lastOccurrence[s.charAt(i) - 'a']);
            if(i==end){
                int partlength = end - start + 1;
                partitions.add(partlength);
                start = i+1;
            }
        }
        return partitions;
    }
}
