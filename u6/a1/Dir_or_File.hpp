//
// Created by Simon Hemmerich on 12.07.16.
//

#ifndef INFO2_DIR_OR_FILE_HPP
#define INFO2_DIR_OR_FILE_HPP

#include <string>
#include <vector>

class Dir_or_File
{
public:
    std::string name;
    bool is_file;
    std::vector<Dir_or_File *> entries;

    Dir_or_File(std::string name);
    static std::vector<std::string> split_after_slash(std::string full_path);
    void insert(std::vector<std::string> names);
};

#endif //INFO2_DIR_OR_FILE_HPP
