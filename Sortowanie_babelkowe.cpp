#include <iostream>

using namespace std;

int array[8] = {5, 4, 3, 2, 1, 6, 7, 8};
int p;
int s;


int swap(int array[], int p, int s, int liczba){
		liczba = array[p];
		array[p] = array[s];
		array[s] = liczba;
}





int main()
{
int poprawne=0;
	while(poprawne != 7){
		poprawne = 0;
		p=0;
		s=1;
		int liczba;
		while(p < 7){
			if(array[p] > array[s]){
				swap(array, p, s, liczba);
				p++;
				s++;
			}else{
				p++;
				s++;
				poprawne++;
			}
			for(int x=0;x<=7; x++){
			cout << array[x];
			
		}
		cout << endl;
		}
	}
}
