//isBinary
bool isBinary(string str)
{
   // Your code here
   for(int i=0; str[i] != '\0'; i++) {
       if(str[i] != '0' && str[i] != '1') {
           return false;
       }
   }
   
   return true;
}
