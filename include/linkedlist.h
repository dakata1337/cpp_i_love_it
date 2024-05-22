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

    T &get_data() {
        return data;
    }
    Node<T> *get_next() {
        return next;
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
        auto newNode = new Node<T>(data);

        if (!this->head) {
            this->head = this->tail = newNode;
        } else {
            this->tail->next = newNode;
            this->tail = newNode;
        }
    }
};
