//! Solution 1
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size; // 5
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++){ // 0 1 2 3 4
		cin>>arr[i];
	}
	for(int i=0;i<size-1;i++){
		int index;
		int flag = 0;
		int myValue = arr[i];
		for(int z=i+1;z<size;z++){
			if(arr[z] < myValue){
				index = z;
				myValue = arr[z];
				flag = 1;
			}
		}
		if(flag == 1){
			int temp = arr[i];
			arr[i] = myValue;
			arr[index] = temp;
		}
	}
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}
*/

//! Solution 2
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int size;
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int min;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                min = arr[i];
                arr[i] = arr[j];
                arr[j] = min;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}