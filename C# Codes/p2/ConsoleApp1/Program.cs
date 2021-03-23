using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace ConsoleApp1
{
    class Program
    {
        
        static void solve(string s , int n )
        {
            var wrd=new List<string>();
            string s1="";
            foreach(var i in s)
            {
              if(i==' ')
              {
                wrd.Add(s1 );
                s1="";
              }
              else  s1+=i; 
            }

            wrd.Add(s1);

            string line="", output="";

            for(var i=0; i<wrd.Count; i++)
            {
              string tmp=wrd[i];

              if(tmp.Length-1 == n  && tmp[tmp.Length-1]=='.'  )
              {              
                output += new string(' ' , n-line.Length );
                output+=line+"\n";
                line="";


                tmp=tmp.Trim(new char[]{'.' } );
                output+=tmp;
                output+="\n" +".";
              }
              else if(tmp.Length +line.Length +1 > n )
              {
                  output += new string(' ' , n-line.Length );
                  output+=line;
                  output+="\n";
                  line=tmp;
              }
              else
              {
                if( line.Length !=0  )line+=" ";
                line+=tmp;
              }
            }

            
            if(line.Length>0)
            {
               if(n-line.Length>0) output += new string(' ' , n-line.Length );
               output+=line;
            }


            Console.WriteLine(output);
        }
            




       static void Main(string[] args)
       {
            String path=@"E:\Desktop\inpt.txt";
            

            //int t=Convert.ToInt32( Console.In.ReadLine());
            int t=Convert.ToInt32(Console.In.ReadLine() ); 
            int cs=1;
            String txt= File.ReadAllText(path);

            solve(txt, t);
            Console.ReadKey();
        }
    }
}