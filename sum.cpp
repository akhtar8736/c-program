#include <iostream>

using namespace  std;

int main()
{
	int array[10];
	int even[5] = {0, 2, 4, 6, 8, };
	int odd[5]  = {1, 3, 5, 7, 9, };

	int index, even_len, odd_len;

	even_len = odd_len = 5;

	index = 0;

	for(int loop =0; loop< even_len; loop++){
		array[index] = even[loop];
		index++;
	}

	for( int loop = 0; loop< odd_len; loop++){
		array[index] = odd[loop];
		index++;
	}
	cout<< "\nEven ->";

	for(int loop =0; loop< even_len; loop++)
        {
		cout<<even[loop]<<" ";

	}
	cout <<"\nOdd -> ";

	for(int loop =0; loop< odd_len; loop++){
		cout<<odd[loop]<<" ";
	}
	cout<<"\nConcat ->";

	for(int loop =0; loop < 10; loop++){
		cout << array[loop]<<" ";
	}
	return 0;
}
