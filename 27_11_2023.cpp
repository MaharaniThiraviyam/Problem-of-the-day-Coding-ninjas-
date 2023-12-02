//Good goodSpell
int goodSpell(int n, string &s) {
   // Write Your Code Here
   long long int first_half=1, second_half=1, i;
   for(i=0; i<n; i++) {
      if(i<n/2) {
        first_half *= s[i] - 48; 
      }
      else {
         second_half *= s[i] - 48;
      }
   }

   if(first_half == second_half) {
      return 1;
   }
   else {
      return 0;
   }
}
