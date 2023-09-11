bool isIgnoreWord(string word, string ignoreWords[])
{
    bool flag = 0;
        for(int i = 0; i < 50; i++){
            if(word == ignoreWords[i]){
                flag = 1;
                break;
            }
        }
    return flag;
}