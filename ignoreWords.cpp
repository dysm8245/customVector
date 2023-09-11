void getIgnoreWords(const char *ignoreWordFileName, string ignoreWords[])
{
    ifstream inFile;
    string line;
    string file = ignoreWordFileName;
    int i = 0;
        inFile.open(file);
        if(inFile.fail()){
            cout << "Failed to open " << file << endl;
        }
        while(getline(inFile, line)){
            ignoreWords[i] = line;
            i++;
        }
        inFile.close();
    
}