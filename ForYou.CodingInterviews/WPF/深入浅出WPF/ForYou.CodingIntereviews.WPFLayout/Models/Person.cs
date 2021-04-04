using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingIntereviews.WPFLayout.Models
{
    public class Person
    {
        private int _age;

        public int Age
        {
            get { return _age; }
            set { _age = value; }
        }

        private string _name;

        public string Name
        {
            get { return _name; }
            set { _name = value; }
        } 
        
    }
}
