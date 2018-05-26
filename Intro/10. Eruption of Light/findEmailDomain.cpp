std::string findEmailDomain(std::string address) {
    int domain_s = address.find_last_of('@');
    std::string domain = address.substr(domain_s + 1, address.size());
    return domain;
}
