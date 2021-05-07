#include <stdio.h> //header
int main()
{
if (remove ("namabaru.txt")!=0)/*proses fungsi menghapus*/
perror("Error deleting file");
else
puts("file succesfully deleted");
return 0;
}

