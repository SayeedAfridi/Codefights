bool chessBoardCellColor(std::string cell1, std::string cell2) {
    return ((((cell1[0] - 'A') + (cell1[1] - '1')) % 2 == 0) == ((cell2[0] - 'A') + (cell2[1] - '1')) % 2 == 0);
}
