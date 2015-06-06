//
//  main.cpp
//  Sezemi
//
//  Created by Yasuda on 2015/06/06.
//  Copyright (c) 2015年 Yasuda. All rights reserved.
//
#include <stdio.h>
#include <iostream>
#include <sstream>
#include <fstream>
#include <istream>

void task1();
int task3();

int main(int argc, const char * argv[]) {
    // insert code here...
    task1();
    return 0;
}

void task1(){
    std::cout << "オムライス" << std::endl;
}

int task3(){
    std::string filename;
    std::stringstream recipestr;
    
    filename = "recipe-data.txt";
    
    std::ifstream ifs(filename);
    if(!ifs){
        std::cout << "error : file is not exist";
        return -1;
    }
    
    while(getline(ifs, recipestr)){
        std::istringstream stream(recipestr);
        std::cout << recipestr << std::endl;
    }
    
    return 1;
}