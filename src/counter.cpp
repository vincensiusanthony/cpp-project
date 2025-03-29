#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    Counter(int initialCount = 0) : count(initialCount) {}

    void increment() {
        count++;
    }

    int getCount() const {
        return count;
    }
};

int main() {
    Counter counter;

    cout << "Initial Count: " << counter.getCount() << endl;

    counter.increment();
    counter.increment();
    counter.increment();

    cout << "Updated Count: " << counter.getCount() << endl;

    Counter anotherCounter(10);

    cout << "Another Counter Initial Count: " << anotherCounter.getCount() << endl;

    anotherCounter.increment();

    cout << "Another Counter Updated Count: " << anotherCounter.getCount() << endl;

    return 0;
}