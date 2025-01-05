std::vector<int> vec = {1, 2, 3};
for (int i = 0; i < vec.size(); ++i) { // Corrected: Loop condition is now i < vec.size()
    std::cout << vec[i] << std::endl;
}