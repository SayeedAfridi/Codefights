std::vector<std::string> allLongestStrings(std::vector<std::string> inputArray) {
    std::vector<std::string> result;
    std::string::size_type max_size = 0;
    for (std::string element : inputArray)
        if (element.size() > max_size)
            max_size = element.size();
    for (std::string element : inputArray)
        if (element.size() == max_size)
            result.push_back(element);
    return result;
}
