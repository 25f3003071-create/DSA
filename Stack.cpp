#include <iostream>
#include <stack>

int main()
{
    std::stack<int> s;

    s.push(10); // Stack: [10]
    s.push(20); // Stack: [10, 20] (top)

    std::cout << "Top: " << s.top() << std::endl; // Output: 20

    s.pop(); // Removes 20. Stack: [10]

    std::cout << "Size: " << s.size() << std::endl; // Output: 1
    return 0;
}
