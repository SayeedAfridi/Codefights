std::string messageFromBinaryCode(std::string code) {
    stringstream sstream(code);
    string output;
    while(sstream.good())
    {
        bitset<8> bits;
        sstream >> bits;
        char c = char(bits.to_ulong());
        if(c != '\u0000')
            output += c;
    }
    return output;
}
