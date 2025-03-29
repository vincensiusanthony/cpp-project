#include <iostream>
#include <functional>

using namespace std;

pair<int, function<int()>> createCounter() {
    static int count = 0; 

    auto increment = []() -> int {
        return ++count;
    };

    auto get = []() -> int {
        return count;
    };

    return {count, increment};
}

int main() {
    pair<int, function<int()>> counter = createCounter();


    int initialValue = counter.first;
    function<int()> increment = counter.second;

    cout << "Initial Count: " << initialValue << endl;
    cout << "After Increment: " << increment() << endl;
    cout << "After Increment: " << increment() << endl;
    cout << "After Increment: " << increment() << endl;

    return 0;
}