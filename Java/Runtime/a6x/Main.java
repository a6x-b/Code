package a6x;

class Student {
    int ID;
    String anme;
    String major;
}

class listnodes {
    int data;
    listnodes link;

    listnodes() {
        data = 0;
        link = null;
    }

    listnodes(int d, listnodes l) {
        data = d;
        link = l;
    }
}

class singlelinkedlist {
    public listnodes insertnode(int data, listnodes head) {
        // create a new node to be added in the begining of the linked list
        listnodes newnode = new listnodes(data, null);
        // link the newnode to the head node
        newnode.link = head;
        // make the newnode as the front node
        head = newnode;
        return head;
    }

    // insert at a particular position(before/after a particular node)
    public listnodes insertAtPosition(listnodes head, int data, int position) {
        listnodes newnode = new listnodes(data, null);// create the newnode
        listnodes previous = head;
        int count = 1;
        while (count <= position - 1)// reach to a particular position count<position(nodeadded before)
        {
            previous = previous.link;// if the condition in while is true that means not the
                                     // position where ypu want to add the node so go to next position
            count++;
        }
        // when the condition is false, position is found
        listnodes current = previous.link;
        newnode.link = current;
        previous.link = newnode;
        return head;
    }

    public listnodes deletefirst(listnodes head) {
        listnodes pre = head;// another reference/nameofthe head
        head = head.link;// move head to the next node
        pre.link = null;// disconnect the pre node from the linked list
        return pre;
    }

    public listnodes deletelast(listnodes head) {
        listnodes cur = head;
        listnodes previouscur = head;
        while (cur.link != null) {// traverse till the last node
            previouscur = cur;
            cur = cur.link;
        }
        previouscur.link = null;// disconnect the last node
        return cur;
    }

    public int length(listnodes head)// the number of nodes in a list
    {
        listnodes current = head;
        int c = 0;
        while (current != null) {
            c++;
            current = current.link;
        }
        return c;
    }

    public boolean find(listnodes head, int searchdata) {
        listnodes cur = head;
        while (cur != null) {
            if (cur.data == searchdata) {
                return true;
            }
            cur = cur.link;
        }
        return false;
    }

    void display(listnodes head) {// method for displaying the listnodes
        listnodes current = head;// step1:another pointer cur pointing to head
        while (current.link != null) {// traverse from first node till the last node(end of the list)
            System.out.print(current.data + "-->");
            current = current.link;// increment(i=i+1)going from one node to another
        }
        System.out.println(current.data);
        
    }

    public void insertlast(listnodes head, int i) {
    }

    public void deleteAtPosition(listnodes head, int i) {
    }
}

class linkedlist {
    public static void main(String[] args) {
        listnodes head = new listnodes(10, null);// 10->null
        singlelinkedlist sl = new singlelinkedlist();
        sl.display(head);

        System.out.println("\n**Insert at front**");
        listnodes newhead = sl.insertnode(20, head);
        sl.display(newhead);

        System.out.println("\n**Insert at a position**");
        sl.insertAtPosition(newhead, 40, 1);
        sl.display(newhead);

        sl.insertlast(head, 30);
        System.out.println("\n****Insert at end***");
        sl.display(newhead);
        
        sl.deleteAtPosition(head, 2);
        System.out.println("\n****Delete at position***");
        sl.display(newhead);
        
        System.out.println("delete a node at the end");
        listnodes l = sl.deletelast(newhead);
        sl.display(l);
        System.out.println("Delete a node at the begining");
        listnodes first = sl.deletefirst(newhead);
        sl.display(first);
        System.out.println("Length = " + sl.length(newhead));
        System.out.println("---Search a node---");
        if (sl.find(newhead, 30)) {
            System.out.println("Searchdata found");
        } else
            System.out.println("Searchdata not found");
    }
}