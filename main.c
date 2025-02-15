#include <stdio.h>
#include "huffman.h"

int main() {
    char arr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    int freq[] = {5, 9, 12, 13, 16, 45};
    int size = sizeof(arr) / sizeof(arr[0]);

    MinHeapNode *root = buildHuffmanTree(arr, freq, size);
    int codes[MAX_TREE_HT], top = 0;
    printCodes(root, codes, top);
    return 0;
}
