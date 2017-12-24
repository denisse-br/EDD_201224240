using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace tarea3
{
    class ABB
    {
        nodo raiz;
        public void insertar(nodo aux, char c)
        {
            if (raiz==null)
            {
                raiz = new nodo(c);

            }else
            {
                if (c<aux.contenido)
                {
                    if (aux.izquierdo==null)
                    {
                        aux.izquierdo = new nodo(c);
                    }else
                    {
                        insertar(aux.izquierdo,c);
                    }
                }
                else
                {
                    if (aux.derecho==null)
                    {
                        aux.derecho = new nodo(c);
                    }else
                    {
                        insertar(aux.derecho, c);
                    }
                }
            }
        }
    }
}
