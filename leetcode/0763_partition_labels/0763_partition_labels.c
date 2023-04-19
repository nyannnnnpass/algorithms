/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int lastAppearIndex(char * s, char ch, int start, int end){
  if (start >= end) return -1;
  for (int i = end - 1; end >= 0; --i) {
    if (s[i] == ch) return i;
  }
}

int* partitionLabels(char * s, int* returnSize){
  int alphabet[26];
  memset(alphabet, 0, 26 * sizeof(char));

  int i = 0;
  int last = 0;
  int length = strlen(s);
  while (i < length) {
  }
}