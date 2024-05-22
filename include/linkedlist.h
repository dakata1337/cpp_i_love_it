#pragma once

#include <cstdlib>

template <typename T> class Node {
  public:
    T data;
    Node<T> *next;

    Node(T data) {
        this->data = data;
        this->next = nullptr;
    }
};

template <typename T> class LinkedList {
  private:
    Node<T> *head, *tail;

  public:
    LinkedList() {
        this->head = this->tail = nullptr;
    }

    Node<T> *begin() {
        return this->head;
    }

    void push_back(T data) {
        auto new_data = new Node<T>(data);

        if (!head) {
            head = tail = new_data;
        } else {
            tail->next = new_data;
            tail = new_data;
        }
    }
};
