#ifndef HUFFMAN_H
#define HUFFMAN_H

#define MAX_TREE_HT 100

typedef struct MinHeapNode {
    char data;
    unsigned freq;
    struct MinHeapNode *left, *right;
} MinHeapNode;

typedef struct MinHeap {
    unsigned size;
    unsigned capacity;
    MinHeapNode **array;
} MinHeap;

MinHeapNode *newNode(char data, unsigned freq);
MinHeap *createMinHeap(unsigned capacity);
void swapMinHeapNode(MinHeapNode **a, MinHeapNode **b);
void minHeapify(MinHeap *minHeap, int idx);
MinHeapNode *extractMin(MinHeap *minHeap);
void insertMinHeap(MinHeap *minHeap, MinHeapNode *node);
void buildMinHeap(MinHeap *minHeap);
int isSizeOne(MinHeap *minHeap);
MinHeap *createAndBuildMinHeap(char data[], int freq[], int size);
MinHeapNode *buildHuffmanTree(char data[], int freq[], int size);
void printCodes(MinHeapNode *root, int arr[], int top);

#endif
