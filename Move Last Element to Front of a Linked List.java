gfg link -> https://practice.geeksforgeeks.org/problems/move-last-element-to-front-of-a-linked-list/1

public static Node moveToFront(Node head) {
        // code here
        Node cur = head.next;
        Node prev = head;
        if(head==null || head.next==null) return head;
        while(cur.next != null){
            prev = prev.next;
            cur = cur.next;
        }
        cur.next = head;
        head = cur;
        prev.next = null;
        return head;
    }
