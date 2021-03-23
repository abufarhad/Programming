using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace Hello_world
{
    class Program
    {

        //int sz=0;

        static void print_line(int sz, string s)
        {
            int space=sz - s.Length ;
            //Console.WriteLine(s.Length);
            //Console.WriteLine(space);
        
            //for(int i=0; i<space; i++)Console.Write(" ");  // For Right alignment 
            //Console.WriteLine(s);

            //int padding = string((sz-s.Length)/2 , ' ');  // For center alignment 

            Console.WriteLine(s);
        }

        static void left_align(string s)
        {

            int sz=Convert.ToInt32(  Console.In.ReadLine());
            string [] v=new string[1000];
            int k=0;

            string s1="";

            

            Console.WriteLine(s);


            for(int i=0; i<s.Length; i++ )
            {
                if(s[i]==' '){ v[k++ ]=s1 ; s1="";}
                else
                {
                    s1+=s[i];
                } 
            }

            v[k]=s1.Trim();
            

           //Console.WriteLine(k );
           //for(int i=0; i<k; i++ )  Console.WriteLine(v[i].Length);
           //Console.WriteLine(v[k]);


            string line="";

            for(int i=0; i<=k; i++ )
            {
                string wrd=v[i];

                if(wrd.Length + line.Length +1 > sz )
                {
                    print_line(sz, line );
                    line=wrd;
                }
                else
                {
                    if(line.Length !=0 )line+=" ";

                    line+=wrd;
                
                }
            }


            print_line(sz, line );


        }
            

        static void Main(string[] args)
        {

            
            
            string path =@"E:\Desktop\inpt.txt";
            string txt= File.ReadAllText(path);


            Console.WriteLine(txt);

            left_align(txt);


            /*  ============= File Input Output =============
             *  
              //string writeText = "Hello World!";  // Create a text string
              //File.WriteAllText("filename.txt", writeText);  // Create a file and write the contents of writeText to it
            
              string path=@"E:\Desktop\inpt.txt";

              string readText = File.ReadAllText(path); // Read the contents of the file
              Console.WriteLine(readText); // Output the content
            */
           
            
            /*  ============= Array Input Output =============
            
                int n=Convert.ToInt32(Console.In.ReadLine());

                int []  a=new int[n];

                for(int i=0; i<a.Length; i++)
                {
                    a[i]=Convert.ToInt32(Console.In.ReadLine());
                }

               for(int i=0; i<a.Length ; i++)
               {
                  Console.Write(a[i]+ " " );
               }
           */

            Console.ReadKey();
           

        }
    }
}
