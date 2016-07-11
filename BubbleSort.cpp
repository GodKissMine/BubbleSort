#include <iostream>
using namespace std;
void BubbleSort(int* pData, int count);
int main()
{
     BubbleSort(a,10);
}
void BubbleSort(int* pData, int count)
{
    int temp = 0;
    for (int i = 1; i < count; i++){
        for (int j = count - 1; j >= i; j--){
            if (pData[j] < pData[j - 1]){
                temp = pData[j - 1];
                pData[j - 1] = pData[j];
                pData[j] = temp;
            }
        }
        cout << "The "<< i <<" round:" << endl;
        for (int i = 0; i< count; i++) {
            cout << pData[i] << " ";
        }
        cout << endl;
        cout << "----------------------------" << endl;
    }
}