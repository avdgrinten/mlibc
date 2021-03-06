#ifndef MLIBC_SIGMA_POSIX
#define MLIBC_SIGMA_POSIX

#include <signal.h>
#include <mlibc/allocator.hpp>

struct SignalGuard {
    SignalGuard(){
        // TODO, Implement signals
    }

    SignalGuard(const SignalGuard &) = delete;

    ~SignalGuard(){
        // TODO
    }

    SignalGuard &operator= (const SignalGuard &) = delete;

private:
    sigset_t restoreMask;
};

MemoryAllocator& getSysdepsAllocator();

#endif