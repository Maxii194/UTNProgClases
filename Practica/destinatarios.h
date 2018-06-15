#ifndef DESTINATARIOS_H_INCLUDED
#define DESTINATARIOS_H_INCLUDED
typedef struct
{
    char nombre[40];
    char mail[128];
}EDestinatario;

EDestinatario* destinatarios_new();
void destinatarios_delete();

int destinatarios_setNombre(EDestinatario* this,char* nombre);
int destinatarios_getNombre(EDestinatario* this,char* nombre);

int destinatarios_setMail(EDestinatario* this,char* mail);
int destinatarios_getMail(EDestinatario* this,char* mail);

#endif // DESTINATARIOS_H_INCLUDED
