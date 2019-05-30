#include "config.h"

namespace kernel
{
Config::Config()
{
    config_file_.open("kernel/config.txt");
    if (!config_file_)
    {
        printf("Could not open config file.\n");
    }
    else
    {
        config_file_ >> machine_size_;
        config_file_ >> proc_count_;
    }
}

std::ostream &operator<<(std::ostream &os, const Config &cfg)
{
    os << "Machine size: " << cfg.machine_size_ << "\n"
       << "Process count: " << cfg.proc_count_;
    return os;
}

int Config::PROC_COUNT() const
{
    return proc_count_;
}

int Config::MACHINE_SIZE() const
{
    return machine_size_;
}
} // namespace kernel