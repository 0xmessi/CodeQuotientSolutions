/*
Write a function moveElements which receives an array of n elements (both positive and negative) as input
and shift all the negative elements to the right side of the array while maintaining the original order 
of the positive and negative elements. 
Modify the same array.
*/

void moveElements(int ar[], int n)
{
  int positive= 0 ;
  for( int i=0 ; i<n ; i++ )
  { 
	if( ar[i] >= 0)
      positive++;
  }
  int pos[positive];
  int neg[n-positive];
  int pi=0, ni=0;
  for(int i=0 ; i< n ; i++)
  {
    if( ar[i] < 0)
    {
		neg[ni++] = ar[i];
    }
    else
    {
      pos[pi++] = ar[i];
    }
  }
  for( int i=0 ; i< pi ; i++)
  {
	 ar[i] = pos[i];
  }
  for(int i=0 ; i<ni ; i++)
  {
	 ar[i+positive] = neg[i];
  }
}
