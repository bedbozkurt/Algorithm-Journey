class ListNode {
    int val;
    ListNode next;
    ListNode() {}
    ListNode(int val) { this.val = val; }
    ListNode(int val, ListNode next) { this.val = val; this.next = next; }
}
 
public class ReorderList {
    public void reorderList(ListNode head) {
        ListNode slow = head;
        ListNode fast = head;
        
        while (fast != null && fast.next != null){
            slow = slow.next;
            fast = fast.next.next;
        }
        ListNode head2 = slow.next;
        slow.next = null;
        
        ListNode prev = null;
        ListNode curr = head2;
        while(curr != null){
            ListNode nextTemp = curr.next;
            curr.next = prev;
            prev = curr;
            curr = nextTemp;
        }
        while(prev != null){
            ListNode temp1 = head.next;
            ListNode temp2 = prev.next;
            head.next = prev;
            prev.next = temp1;
            head = temp1;
            prev = temp2;
        }
    }
}