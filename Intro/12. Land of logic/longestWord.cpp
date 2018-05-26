std::string longestWord(std::string text) {
    std::string result = "";
    for (int i = 0; i < text.size();) {
        int c = 0;
        while (isalpha(text[i + c])){c++;}
        result = result.size() > c ? result : text.substr(i, c);
        c == 0 ? i++ : i += c;
    }
    return result;
}
