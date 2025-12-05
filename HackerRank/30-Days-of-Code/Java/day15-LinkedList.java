import java.io.*;
import java.util.*;

// Question Link : https://www.hackerrank.com/challenges/30-linked-list/problem?isFullScreen=true

class Node {
	int data;
	Node next;
	Node(int d) {
        data = d;
        next = null;
    }
}

class Solution {

    public static Node insert(Node head, int data) {
    Node newNode = new Node(data);

    if (head == null) {
        return newNode;
    }

    Node current = head;

    while (current.next != null) {
        current = current.next; 
    }

    current.next = newNode;

    return head;
}

	public static void display(Node head) {
        Node start = head;
        while(start != null) {
            System.out.print(start.data + " ");
            start = start.next;
        }
    }

    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        Node head = null;
        int N = scan.nextInt();

        while(N-- > 0) {
            int ele = scan.nextInt();
            head = insert(head,ele);
        }
        display(head);
        scan.close();
    }
}