using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace tarea3
{
    class nodo
    {
        public char contenido;
        public nodo izquierdo;
        public nodo derecho;

        public nodo(char c)
        {
            contenido = c;
            derecho = null;
            izquierdo = null;
        }
    }

    
}
