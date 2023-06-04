   /*
   
   The current selected programming language is Java. We emphasize the submission of a fully working code over partially correct but efficient code. Once submitted, you cannot review this problem again. You can use System.out.println() to debug your code. The

   System.out.println() may not work in case of syntax/runtime error. The version of JDK being used is 1.8.

   Note: The main class name must be

   "Solution"

   Bob has to send a secret code Sto his boss. He designs a method to

   encrypt the code using two key values N and M. The formula that he uses to develop the encrypted code

   is shown below:

   (((SN 9610)M) 961000000007)

   Write an algorithm to help Bob encrypt the code.

   Input

   The input consists of an integer secretCode, representing the

   secret code (5),

   The second line consists of an

   integer firstKey, representing the first key value (N)

   The third line consists of an integer secondKey, representing the second key value (M).

   Output

   Print an integer representing the

   code encrypted by Bob.

   Constraints

   1 ≤ secretCode < 109

   0 < firstKey, secondKeys

   1000000007

   Example

   Input:

   Output: 4096

   Explanation: 5-2, N=3 M-4 and the formula of the encrypted code is:

   (((S 9610)961000000007)

   (((29610) 961000000007) = 4096 So, the output is 4096.


   */

   import java.util.*;

   import java.lang.*;

   import java.io.*;


   public class Solution {

      public static int[] prodDelivery (int[] orderID){

   int[] answer = new int[orderID.length];

   // Write your code here

   for (int i=0;i<orderID.length; i++){

   int num=orderID[i];

   for (int j=0; num>0;j++){ 
      
      orderID[i]=orderID[i]+(num%10); 
      num=num/10;
   }
   }

   public static int findSecretCode(int secretCode, int firstKey, int secondkey) {

      int answer = 0; 
      
      // Write your code here
      
      return answer;
      
      }
      
      public static void main(String[] args){
      
      Scanner in = new Scanner(System.in); 
      
      // input for secretCode 
      
      int secretCode = in.nextInt();
      
      // input for firstKey 
      int firstKey = in.nextInt();
      
      // input for secondKey 
      
      int secondKey = in.nextInt();
      
      int result = findSecretCode(secretCode, firstKey, secondKey); 
      System.out.print(result);
      
      }
      }
   }