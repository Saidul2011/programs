#include <stdlib.h>
#include <windows.h>

int main() {
    // Use the Windows API to initiate a system shutdown
    if (ExitWindowsEx(EWX_SHUTDOWN | EWX_FORCE, 0) == 0) {
        // If the function fails, print an error message
        perror("Error initiating system shutdown");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
