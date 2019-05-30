#include <stdio.h>

#include "config.h"
#include "scheduler/procmngr.h"

int main(int argc, char *argv[])
{
    kernel::Config cfg = kernel::Config();
    scheduler::ProcessManager pmg = scheduler::ProcessManager();
    pmg.load_new_process();
}