int getTotalNumberNonIgnoreWords(wordRecord distinctWords[], int length)
{
    int count = 0;
        for(int i = 0; i < length; i++){
            count += distinctWords[i].count;
        }
    return count;
}