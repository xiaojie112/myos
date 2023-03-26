#include "tools/floppy.h"
#include "tools/fileinfo.h"

int main() {
    char* boot_filepath = "/home/ziya/CLionProjects/myos/build/boot/boot.o";

    Floppy* floppy = create_floppy();

    Fileinfo* boot_fileinfo = read_file(boot_filepath);
    write_bootloader(floppy, boot_fileinfo);

    create_image("/home/ziya/CLionProjects/myos/a.img", floppy);

    return 0;
}
