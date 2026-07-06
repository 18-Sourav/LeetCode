int compare(const void *a, const void *b)
{
    int *A = *(int **)a;
    int *B = *(int **)b;

    if (A[0] == B[0])          // same start
        return B[1] - A[1];    // end descending

    return A[0] - B[0];        // start ascending
}

int removeCoveredIntervals(int** intervals, int intervalsSize, int* intervalsColSize) {
    
    qsort(intervals, intervalsSize, sizeof(int *), compare);
    int count = 1;
    int maxEnd = intervals[0][1];

    for (int i = 1; i < intervalsSize; i++)
    {
        if (intervals[i][1] > maxEnd)
        {
            count++;
            maxEnd = intervals[i][1];
        }
        // else: current interval is covered
    }

    return count;
}
