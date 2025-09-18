/*
    Author: Zhao Zhang
    Course: CSCI-135
    Instructor: Tong Yi
    Assignment: E4.8

    Write a program that reads a word and prints each character of the word on a separate line
*/

#include <iostream>

int main(){
    std::string word;
    std::cout << "Enter a word: ";
    std::cin >> word;
    for (int i = 0; i < word.length(); i++){
        std::cout << word.substr(i, 1) << std::endl;
    }
    return 0;
}