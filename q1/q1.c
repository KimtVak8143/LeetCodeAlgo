/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* diStringMatch(char * s, int* returnSize){
    int first = 0,last = strlen(s);
    *returnSize=strlen(s)+1;
    int *ar=malloc(sizeof(int)*(*returnSize));
    int i=0;
    for(i=0;i<=strlen(s);++i)
    {   if(s[i]=='I')
            ar[i]=first++;
        else
            ar[i]=last--;        
    }
    ar[strlen(s)]=first;
    return ar;
}