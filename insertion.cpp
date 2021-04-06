#include <iostream>
#include <ctime>

template<class T>
void insertionSort(T* array, int size)
{
    int target, location;
    T key;

    for(target=0; target<size; target++){
        if(array[target]>array[target+1]){
            location = target + 1;
            key = array[location];

            do{
                array[location] = array[location-1];
                location--;
            }
            while(location>1 && array[location-1]>key);
            
            array[location] = key;
        }
    }
}

int main() {
    int size = 100;
    int array[size];
    int randomVal;
    srand(time(0));

    // generate randomized array and print
    for(int i; i<size; i++){
        randomVal = rand() % 100;
        array[i] = randomVal;
        std:: cout << array[i] << std::endl;
    }

    // insertion sort
    insertionSort(array, size);

    // print array
    for(int i: array){
        std::cout << i << std::endl; 
    }
        

    std::cout << "Compelete" << std::endl;
}