using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            int v1 = 1; // vertical line
            int v2 = 2;
            int v3 = 3;
            int h1 = 6; // horizontal line
            int h2 = 7;
            int h3 = 8;
            int circle = 0;
            int x1 = 4;
            int x2 = 9;
            int potato = 5;

            string o1 = "" + v3 + h1 + "." + h1 + h2 + "." + h1 + h3 + "." + h1 + h3 + "." + h1 + h2 + "." + x1 + x2;
            string o2 = "." + potato + h2 + "." + v3 + h1 + "." + v1 + v2 + v3 + "." + potato + v3 + "." + x1 + h3 + ".";
            string o3 = "" + x2 + potato + "." + v1 + v2 + v1 + "." + x1 + h3 + "." + v1 + v1 + h2 + "." + x2 + potato + ".";
            string o4 = "" + v1 + circle + v2 + "." + potato + v2 + "." + h2 + h3 + "." + x2 + x2 + "." + h3 + x2 + "." + x2 + potato;
            string o5 = "." + v1 + circle + v2 + "." + v1 + circle + h3 + "." + x1 + h3 + "." + h3 + h2 + "." + potato + v1;
            string o6 = "." + v1 + v1 + x1 + "." + x2 + potato + "." + h2 + h3 + "." + v1 + v1 + h2 + "." + h2 + h2 + ".";
            string o7 = "" + x2 + h3 + "." + potato + v1 + "." + h3 + v2 + "." + potato + v3 + "." + v1 + v2 + potato;

            string bigO = o1 + o2 + o3 + o4 + o5 + o6 + o7;

            Console.WriteLine(bigO);
            List<String> toConvert = bigO.Split('.').ToList();

            foreach(String s in toConvert)
            {
                try
                {
                    char c = Convert.ToChar(Int32.Parse(s));
                    Console.Write(c);
                }
                catch (Exception)
                {
                    
                }
            }
            Console.ReadLine();
        }
    }
}
