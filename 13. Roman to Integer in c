
int value(char s);
int romanToInt(char * s){
   
   int result=0;
for(int i=0;i<strlen(s);i++)
    {
        int c1=value(s[i]);
        //check if its the last char in the string
        if(i+1<strlen(s))
        {
            int c2=value(s[i+1]);
            if(c1>=c2)
            {
              result = result + c1;  
            }
            else
            {
                result = result + c2 - c1;
                i++;
            }
        }else
        {
            result = result + c1;
        }
        
    }
    return result;
    } 

int value(char s){
 
    int value=0;
 
    switch(s){
         case 'I': value = 1; break;
         case 'V': value = 5; break;
         case 'X': value = 10; break;
         case 'L': value = 50; break;
         case 'C': value = 100; break;
         case 'D': value = 500; break;
         case 'M': value = 1000; break;
         case '\0': value = 0; break;
         default: value = -1; 
    }
 
    return value;
}
