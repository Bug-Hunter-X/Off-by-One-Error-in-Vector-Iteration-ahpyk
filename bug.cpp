std::vector<int> vec = {1, 2, 3};
for (int i = 0; i <= vec.size(); ++i) { // Error: Accessing vec[vec.size()] is out of bounds
    std::cout << vec[i] << std::endl;
}