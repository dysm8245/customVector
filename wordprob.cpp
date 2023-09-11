void printTenFromN(wordRecord distinctWords[], int N, int totalNumWords)
{
    float prob = 0;
        for(int i = N; i < N+10; i++){
            prob = (float)distinctWords[i].count/totalNumWords;
            cout << fixed << setprecision(4) << prob << " - " << distinctWords[i].word << endl;
        }
}