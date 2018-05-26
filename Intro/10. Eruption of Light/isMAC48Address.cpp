bool isMAC48Address(std::string inputString) {
    regex expr("([0-9A-Fa-f]{2}[:-]){5}([0-9A-Fa-f]{2})");

    return regex_match(inputString, expr);
}
