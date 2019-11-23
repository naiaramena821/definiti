#ifndef LIBRO_H
#define LIBRO_H


class Libro
{
    public:
        Libro();
        void mostrar_estilos();
        void romance();
        void gotico();
        void fantasia();
        void drama();
        void mostrar_libros();
        void vol_ro();//permite volver a los libros de ese estilo
        void vol_te();//permite volver a los libros de ese estilo
        void vol_go();//permite volver a los libros de ese estilo
        void vol_fa();//permite volver a los libros de ese estilo
        void vol_dra();//permite volver a los libros de ese estilo
        char vol;//valor pedido dentro de las funciones vol
        ~Libro();
};

#endif // LIBRO_H
