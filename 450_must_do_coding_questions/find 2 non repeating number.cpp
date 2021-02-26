int Xor = arr[0]; 
   
    /* Will have only single set bit of Xor */
    int set_bit_no; 
    int i; 
    *x = 0; 
    *y = 0; 
     
    /* Get the Xor of all elements */
    for(i = 1; i < n; i++) 
    Xor ^= arr[i]; 
     
    /* Get the rightmost set bit in set_bit_no */
    set_bit_no = Xor & ~(Xor-1); 
     
    /* Now divide elements in two sets by 
    comparing rightmost set bit of Xor with bit 
    at same position in each element. */
    for(i = 0; i < n; i++) 
    {  
         
      /*Xor of first set */
      if(arr[i] & set_bit_no) 
        *x = *x ^ arr[i]; 
      /*Xor of second set*/
      else
      {
        *y = *y ^ arr[i];
      }
    } 