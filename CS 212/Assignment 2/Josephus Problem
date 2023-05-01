#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class CircularLinkedList {
public:
    Node* head;

    CircularLinkedList() {
        this->head = NULL;
    }

    void append(int data) {
        Node* new_node = new Node(data);

        if (this->head == NULL) {
            this->head = new_node;
            new_node->next = this->head;
        } else {
            Node* current_node = this->head;
            while (current_node->next != this->head) {
                current_node = current_node->next;
            }
            current_node->next = new_node;
            new_node->next = this->head;
        }
    }

    void delete_node(Node* node) {
        if (this->head == node) {
            Node* current_node = this->head;
            while (current_node->next != this->head) {
                current_node = current_node->next;
            }
            current_node->next = this->head->next;
            this->head = this->head->next;
            delete node;
        } else {
            Node* current_node = this->head;
            while (current_node->next != node) {
                current_node = current_node->next;
            }
            current_node->next = node->next;
            delete node;
        }
    }
};

int josephus(int n, int k) {
    CircularLinkedList list;

    for (int i = 1; i <= n; i++) {
        list.append(i);
    }

    Node* current_node = list.head;
    while (n > 1) {
        for (int i = 1; i < k; i++) {
            current_node = current_node->next;
        }
        Node* next_node = current_node->next;
        list.delete_node(current_node);
        current_node = next_node;
        n--;
    }

    return list.head->data;
}

int main() {
    int n = 7;
    int k = 3;
    int survivor = josephus(n, k);
    std::cout << "The survivor is " << survivor << std::endl;
    return 0;
}
