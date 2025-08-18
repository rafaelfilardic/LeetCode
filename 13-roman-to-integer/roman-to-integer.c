int romanValue(char s) {
    switch(s) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int romanToInt(char* s) {
    int num = 0;
    int i = 0;

    while(s[i] != '\0') {
        if(s[i+1] != '\0') {
            if(romanValue(s[i]) < romanValue(s[i+1])) {
                num += romanValue(s[i+1]) - romanValue(s[i]);
                i += 2;
            }
            else {
            num += romanValue(s[i]);
            i++;
        }
        }
        else {
            num += romanValue(s[i]);
            i++;
        }
    }

    return num;
}