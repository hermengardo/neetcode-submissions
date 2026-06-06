class Node {
public:
    int key;
    int value;
    Node* next;

    Node(int k, int v) {
        next = nullptr;
        value = v;
        key = k;
    }
};

class MyHashMap {
private:
    Node* head;

public:
    MyHashMap() {
        head = nullptr;
    }
    
    void put(int key, int value) {
        Node* node = new Node(key, value);
        
        if (head == nullptr) {
            head = node;
            return;
        }

        if (contains(key)) {
            remove(key);
            put(key, value);
            return;
        }

        Node* temp = head;

        while(temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = node;
        return;
    }
    
    int get(int key) {
        if (head == nullptr) {
            return -1;
        }

        Node* temp = head;
        while(temp != nullptr) {
            if (temp->key == key) {
                return temp->value;
            }

            temp = temp->next;
        }

        return -1;
    }
    
    void remove(int key) {
        if (head == nullptr) {
            return;
        }

        Node* temp = head;
        if (head->key == key) {
            head = head->next;
            delete temp;
            return;
        }

        while (temp->next) {
            if (temp->next->key == key){
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
            if (temp->key == key) {
                return true;
            }
            temp = temp->next;
        }

        return false;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */