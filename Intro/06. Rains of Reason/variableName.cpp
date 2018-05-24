bool variableName(std::string name) {
    regex r("[a-zA-Z_][0-9a-zA-Z_]*");
    return regex_match(name, r);
}
