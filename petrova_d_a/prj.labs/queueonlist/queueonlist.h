#ifndef PETROVA_D_A_PRJ_LABS_QUEUEONLIST_QUEUEONLIST_H_
#define PETROVA_D_A_PRJ_LABS_QUEUEONLIST_QUEUEONLIST_H_
#include <iosfwd>

class QueueOnList {
 public:
    QueueOnList() = default;
    QueueOnList(const QueueOnList &arr);
    ~QueueOnList();
    void push(const int val);
    void pop();
    int& top();
    bool empty() const { return begin_ == nullptr; }
    QueueOnList& operator=(const QueueOnList &arr);
 private:
    struct Node {
        Node* next_{ nullptr };
        Node* prev_{ nullptr };
        int data_{ 0 };
        Node(Node* prev, const int &data) : prev_(prev), data_(data) { }
    };
    Node* begin_{ nullptr };
    Node* end_{ nullptr };
};

#endif  // PETROVA_D_A_PRJ_LABS_QUEUEONLIST_QUEUEONLIST_H_
