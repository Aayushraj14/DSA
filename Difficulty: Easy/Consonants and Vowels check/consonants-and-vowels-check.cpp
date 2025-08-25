void checkString(string s) {
    int v = 0;
    int c = 0;

    // Your code here
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        if(ch==' '){}
        else if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')v++;
        else c++;
    }

    if (v > c)
        cout << "Yes";
    else if (c > v)
        cout << "No";
    else
        cout << "Same";

    cout << endl;
}