#ifndef HEADER_GUARD_STACK_HPP_INCLUDED
#define HEADER_GUARD_STACK_HPP_INCLUDED

#include <iostream>
#include <stdexcept>
#include <utility>

template <typename T>
class Stack {
    // Узлы стека
    struct Node {
        T data;
        Node* next;

        Node(T val) : data(val), next(nullptr) {}
    };
    // Верхний узел стека
    Node* top_;

public:
    // Конструктор по умолчанию
    Stack() : top_(nullptr) {}

    // Конструктор копирования
    Stack(const Stack& other) : top_(nullptr) {
        Node* current = other.top_;
        Node* prev = nullptr;
        Node* newNode = nullptr;
        while (current != nullptr) {
            newNode = new Node(current->data);
            if (prev == nullptr) {
                top_ = newNode;
            } else {
                prev->next = newNode;
            }
            prev = newNode;
            current = current->next;
        }
    }

    // Конструктор перемещения
    Stack(Stack&& other) noexcept : top_(other.top_) {
            other.top_ = nullptr;
    }

    // Оператор присваивания копированием
    Stack& operator=(const Stack& other) {
        if (this != &other) {
            Stack temp(other); // Создаем временный стек, используя конструктор копирования
            std::swap(top_, temp.top_); // Обмениваем данные текущего стека с временным стеком
            // Теперь temp содержит старые данные объекта this и удалятся
        }
        return *this;
    }

    // Оператор присваивания перемещением
    Stack& operator=(Stack&& other) noexcept {
        if (this != &other) {
            delete top_; // Удаление текущего списка
            top_ = other.top_; // Переключение top_ на новый список
            other.top_ = nullptr; // Установка top_ другого стека в nullptr
        }
        return *this;
    }

    // Деструктор
    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }

    // Push на стек
    void push(const T& value) {
        Node* newNode = new Node(value);
        newNode->next = top_;
        top_ = newNode;
    }

    // Pop со стека
    T pop() {
        if (isEmpty()) {
            throw std::runtime_error("Stack is empty. Cannot pop.");
        }
        Node* temp = top_;
        T poppedValue = top_->data;
        top_ = top_->next;
        delete temp;
        return poppedValue;
    }

    // Чтение верхнего элемента стека
    T top() const {
        if (isEmpty()) {
            throw std::runtime_error("Stack is empty. Cannot peek.");
        }
        return top_->data;
    }

    bool isEmpty() const {
        return top_ == nullptr;
    }
};


#endif //HEADER_GUARD_STACK_HPP_INCLUDED
