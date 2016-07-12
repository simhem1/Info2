//
// Created by Simon Hemmerich on 12.07.16.
//

#include "Dir_or_File.hpp"


Dir_or_File::Dir_or_File(std::string name)
{
    // constructor stuff goes here
    // make sure that is_file is set according to the '/' rules -> make a check here!
}


std::vector<std::string> Dir_or_File::split_after_slash(std::string full_path)
{
    // take care of '/'
    // check what comes after a slash and decide what to do according to what you find
    // so iterate through your string and find slashes
    // and then decide what to do...

    std::vector<std::string> ret;
    std::string temp;
    std::vector<int> positionsOfSlashes;
    int slashCounter=0;
    int charCounter=1;

    for(int i=0; i<full_path.length(); i++) {
        if (full_path.at(i) == '/')
            positionsOfSlashes.push_back(i);
    }
    char firstChar =full_path.at(0);
    std::string firstSlash(1, firstChar);
    ret.push_back(firstSlash);
    for(int j=1; j<positionsOfSlashes.size(); j++){
        temp=full_path.substr(positionsOfSlashes.at(j),(positionsOfSlashes.at(j+1)-positionsOfSlashes.at(j)));
        ret.push_back(temp);
    }

    // iteration goes here

    return ret;
}


void Dir_or_File::insert(std::vector<std::string> names)
{
    // now comes the insertion of new entries
    // again make sure to distinguihs between files and directories
}
