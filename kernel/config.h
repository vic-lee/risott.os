#pragma once

#include <fstream>
#include <iostream>

namespace kernel
{
class Config
{
public:
    Config();
    int PROC_COUNT() const;
    int MACHINE_SIZE() const;
    friend std::ostream &operator<<(std::ostream &os, const Config &cfg);

private:
    int proc_count_;
    int machine_size_;
    std::ifstream config_file_;
};
} // namespace kernel