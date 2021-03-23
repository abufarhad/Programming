using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace Practice
{
    class Program
    {

        static void solve()
        {
            var mp= new Dictionary<int , List<int> >();

            if (!mp.ContainsKey(3))  mp.Add(3, new List<int>());
            if (!mp.ContainsKey(5))  mp.Add(5, new List<int>());

            mp[3].Add(10);
            mp[3].Add(35);

            mp[5].Add(1);
            mp[5].Add(3);

            Console.WriteLine(mp[3][1]);


            foreach(var kvp in mp)
            {
              foreach(var value in kvp.Value)
              {
                 Console.WriteLine("Key = {0}, Value = {1}", kvp.Key, value);
              }
            }
        }


        static void Main(string[] args)
        {
            //String path=@"E:\Desktop\inpt.txt";
            //String B= File.ReadAllText(path);

            //int t=Convert.ToInt32( Console.In.ReadLine());
            //int t=Convert.ToInt32(Console.In.ReadLine() ); 
            int cs=1;

            solve();

            /*
            while(t>0)
            {
               int ws=Convert.ToInt32( Console.In.ReadLine());
               string s=Console.ReadLine();

               //Console.WriteLine(s);

               Console.Write("Case {0}: ", cs );
               string ans=solve(s, ws );


               if(ans=="-1")Console.WriteLine("NO");
               else {Console.WriteLine("YES");Console.Write(ans);}

               cs++;
               t--;
            }*/
            
            Console.ReadKey();
        }
    }
}