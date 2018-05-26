bool bishopAndPawn(std::string bishop, std::string pawn) {
    int letter = abs((bishop[0] - 96) - (pawn[0] - 96));
    int number = abs(bishop[1] - pawn[1]);
    return (letter == number);
}
