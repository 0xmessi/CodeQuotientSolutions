/*
Remove duplicates from sorted array but modify the same array and update size variable accordingly
*/
void removeDuplicates(int *ar, int *size)
{
    int b[*size];
  int index = 0;
  b[0] = ar[0];
  for(int i=1 ; i< *size; i++)
  {
	if(ar[i] != b[index])
    {
		b[++index] = ar[i];
    }
  }
  for( int i=0 ; i <= index ; i++ )
  {
    ar[i]=b[i];
  }
  *size = index+1;
}
