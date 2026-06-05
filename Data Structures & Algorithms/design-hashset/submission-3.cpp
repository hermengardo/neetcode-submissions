class Node {
public:
    int data;
    Node* next;

    Node (int value) : data(value), next(nullptr) {}
};

class MyHashSet {
private:
    Node* head;
public:
    MyHashSet() {
        head = nullptr;
    }
    
    void add(int key) {
        if (contains(key)) {
            return;
        }

        Node* node = new Node(key);
        if (head == nullptr) {
            head = node;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = node;
    }
    
    void remove(int key) {
        if (head == nullptr) {
            return;
        }

        if (head->data == key) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* temp = head;
        while (temp->next) {
            if (temp->next->data == key) {
                Node* node = temp->next;
                temp->next = temp->next->next;
                delete node;
                return;
            }
            temp = temp->next;
        }
    }
    
    bool contains(int key) {
        if (head == nullptr) {
            return false;
        }

        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == key) {
                return true;
            }
            temp = temp->next;
        }

        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */