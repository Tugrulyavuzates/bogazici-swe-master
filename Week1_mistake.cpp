//
// Created by Tuğrul Ateş on 26.09.2026.
//
#include <iostream>
#include <algorithm>
#include <cstdlib>


int main() {

    int x, y, z;
    std::cout <<"Type a number: ";
    std::cin >> x;
    std::cout <<"your number is : "+ x;
    std::cout <<"Type another number: ";
    std::cin >> y;
    std::cout <<"your number is : "+ y;
    std::cout <<"Type another number: ";
    std::cin >> z;
    std::cout <<"your number is : "+ z;//How do i tell the computer what cout means instead of using std:: all the time
    int user[3] = {x, y, z}; //Are lists always on curved brackets?

    // Sort array (by default in ascending order)
    std::sort(user, user + 3);

    for (int i : user)
        std::cout << i << " ";
    return 0;
}