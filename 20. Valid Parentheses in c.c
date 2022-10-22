#define MAX_STRING_SIZE 4096
bool isValid(char * s){

    char stacklike[MAX_STRING_SIZE]={0};
    int top=0,currentch=0;
    bool isvalid=true;
    while(s[currentch] !='\0' && isvalid == true)
    {
        char ch =s[currentch];
        if(ch == '(' || ch == '{' || ch == '[')
        {
            stacklike[top]=ch;
            top++;
        }else
            if(top == 0)
            {
                isvalid = false;
            }
        else if(ch == ')' && stacklike[top - 1] == '(')
                {
                    top--;
                    stacklike[top] = '\0';
                }
        else if(ch == '}' && stacklike[top - 1] == '{')
                {
                    top--;
                    stacklike[top] = '\0';
                }
        else if(ch == ']' && stacklike[top - 1] == '[')
                {
                    top--;
                    stacklike[top] = '\0';
                }else{ isvalid =false;}
                currentch++;
    }
                if((isvalid==true) && (top==0))
                {
                    return true;
                
                }else
                {
                    return false;
                }
}
