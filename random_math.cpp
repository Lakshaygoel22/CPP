#include <iostream>
#include <vector>
#include <numeric>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0));
    
    std::vector<int> numbers;
    for(int i = 0; i < 10; ++i) {
        numbers.push_back(std::rand() % 100);
    }

    std::cout << "Random Numbers: ";
    for(int n : numbers) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    int sum = std::accumulate(numbers.begin(), numbers.end(), 0);
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Average: " << (double)sum / numbers.size() << std::endl;

    return 0;
}
