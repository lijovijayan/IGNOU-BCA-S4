// Use the Insertion Sort to sort the following list showing all the intermediate
// steps :
// 25 15 5 10 12 7 9 18
// How many swap operations will the loop execute ?

int main()
{
    int arr[] = {25, 15, 5, 10, 12, 7, 9, 18};

    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        int j = i;

        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }

    return 0;
}