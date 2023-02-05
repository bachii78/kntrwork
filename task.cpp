#include "task.hpp"

void randomFill(int *ar, int size, int min, int max){
        srand(time(nullptr));
        for (int i = 0; i < size; i++){
                ar[i] = rand()%(max - min + 1) + min;
        }
}


void show(int *ar, int size){

        for(int i = 0; i < size; i++){
                std::cout << i << "\t" << ar[i] << "\n";

        }

}

void randomFill1(int *ar, int size, int min, int max){
        srand(time(nullptr));
        for (int i = 0; i < size; i++){
                ar[i] = rand() % (max - min + 1) + min;
        }
}

int showEl1(const int *ar, int size, int n, int m){
        static int index = 0;
        static int N = 0; //N - количество строк

        if(N >= m){

                return 0;
        }

        for(int M = 0;  M < m; M++){
                std::cout << ar[index] << "\t";
                index++;
        }

        N++;

        std::cout << "\n";

        showEl1(ar, size, n, m);

        return 0;
}



int showEl(const int *ar, int size, int n, int m){
        static int index = 0;
        static int N = 0; //N - количество строк

        if(N >= m){

                return 0;
        }

        for(int M = 0;  M < m; M++){
                std::cout << ar[index] << "\t";
                index++;
        }

        N++;

        std::cout << "\n";

        showEl(ar, size, n, m);

        return 0;
}


void swap(int &a,int  &b){
        int temp = a;
        a = b;
        b = temp;
}


void selectionSort(int *ar, int size){
        for(int i = 0; i < size; i++){
                swap(ar[i], ar[search(ar, size, i)]);
        }
}


int search(int *ar, int size, int i){
        int min = ar[i];
        int index = 0;
        for(int j = i; j < size; j++){
                  if(ar[j] <= min){
                          min = ar[j];
                          index = j;
                  }
        }
        return index;
}

void random(int *ar, int size){
        srand(time(nullptr));
        for (int i = 0; i < size; i++) {
                ar[i] = rand() % 100;
        }
}

void print(int *ar, int size){
        for(int i = 0; i < size; i++){

                std::cout << ar[i] << '\t';
        }
        std::cout << '\n';
}

int getMax(const int *ar, int size){
        static int left = 0;
        static int right = size - 1;
        static int deepRec = 1;

        if(right == left){
                std::cout << "max = " << ar[left] << " "  << "deepRec = " << deepRec << std::endl;
                return 0;
        }

        if(ar[left] <= ar[right]){
                left++;
        }

        else if(ar[left] > ar[right]){
                right--;
        }

        deepRec++;

        getMax(ar, size);

        return 0;
}

int getMin(const int *ar, int size){
        static int left = 0;
        static int right = size -1;
        static int deepRec = 1;

        if(right == left){
                std::cout << "min = " << ar[left] << " " << "deepRec = " << deepRec << std::endl;
                return 0;
        }
        if(ar[left] <= ar[right]){
                right--;
        }

        else if(ar[left] > ar[right]){
                left++;
        }

        deepRec++;

        getMin(ar,size);

        return 0;
}
