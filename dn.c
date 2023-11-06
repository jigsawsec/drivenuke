#include <stdio.h>
#include <Windows.h>

int main() {
    BOOL result = DeleteVolumeMountPointW(L"C:\\");

    if (result) {
        return 0;
    } else {
        printf("Failed to delete mount point.\n");
        return 0;
    }

    return 0;
}
