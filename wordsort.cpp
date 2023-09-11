void sortArray(wordRecord distinctWords[], int length)
{   
    int x = 0;
    int y = 0;
    string x1;
    string y1;
    int index = 0;
    int temp = 0;
    string temp2;
        for(int i = 0; i < length; i++){
            x = distinctWords[i].count;
                for(int j = i; j < length; j++){
                    y = distinctWords[j].count;
                    if(y >= x){
                        x = y;
                        index = j;
                    }
                }
            temp = distinctWords[i].count;
            temp2 = distinctWords[i].word;
            distinctWords[i] = distinctWords[index];
            distinctWords[index].count = temp;
            distinctWords[index].word = temp2;
        }
        for(int i = 0; i < length; i++){
            x = distinctWords[i].count;
            x1 = distinctWords[i].word;
                for(int j = i; j < length; j++){
                    y = distinctWords[j].count;
                    y1 = distinctWords[j].word;
                    if(y == x && y[0] < x[0]){
                        index = j;
                        temp = distinctWords[i].count;
                        temp2 = distinctWords[i].word;
                        distinctWords[i] = distinctWords[index];
                        distinctWords[index].count = temp;
                        distinctWords[index].word = temp2;
                    }
                }
        }
}