#include <iostream>

using namespace std;

void RearrangeNeg(int arr[], int arrSize){
    int posArr[arrSize], negArr[arrSize], p = 0, n = 0;
          for(int i = 0; i < arrSize; i++){
            if(arr[i] >= 0){
                posArr[p] = arr[i];
                p++;
            }
            else if(arr[i] < 0){
                negArr[n] = arr[i];
                n++;
            }
          }
          int pos = 0;
          int neg, nI = 0;
          while(p > 0){
            arr[pos] = posArr[pos];
            pos++;
            p--;
          }
          neg = pos;
          while(n > 0){
            arr[neg] = negArr[nI];
            nI++;
            neg++;
            n--;
          }
          cout << "Updated array first positive then negative: ";
          for(int i = 0; i < arrSize; i++){
            cout << arr[i] << " ";
          }
}

int main()
{
    int arrSize;
    cout << "Enter array size: ";
    cin >> arrSize;

    int arr[arrSize];
    cout << "Enter array elements: ";
    for(int i = 0; i < arrSize; i++){
        cin >> arr[i];
    }

    RearrangeNeg(arr, arrSize);
    return 0;
}
