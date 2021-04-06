#include <iostream>
#include <ctime>

template<class T>
void insertionSort(T* array, int size)
{   
    int target, location;
    T key;

    for(target=0; target<size; target++){
        // condition: next element of target is smaller than target
        if(array[target]>array[target+1]){
            // record the location of the next element
            location = target + 1;
            // store the element to key
            key = array[location];

            // keep moving each element to the right by 1
            do{
                array[location] = array[location-1];
                location--;
            }// until the element moving is smaller than key
            while(location>0 && array[location-1]>key);
            // locate key to the position
            array[location] = key;
        }
    }
}

int main() {
    int size = 100;
    int array[size];
    int randomVal;
    srand(time(0));

    std::cout << "|Before Sort|" << std::endl;

    // generate randomized array and print
    for(int i; i<size; i++){
        randomVal = rand() % 100;
        array[i] = randomVal;
        std:: cout << array[i] << " ";
    }

    std::cout << "\n|After Sort|" << std::endl;

    // insertion sort
    insertionSort(array, size);

    // print array
    for(int i: array){
        std::cout << i << " "; 
    }

    std::cout << "Compelete" << std::endl;
}