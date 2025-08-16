int maximum69Number (int num) {
    char numStr[5];
    sprintf(numStr, "%d", num);

    for (int i = 0; i < strlen(numStr); i++) {
        if (numStr[i] == '6') {
            numStr[i] = '9';
            break;
        }
    }
    
    return atoi(numStr);

}