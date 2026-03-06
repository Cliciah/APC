//#include <stdio.h>

struct tipoFiliacao
{
    char nome[80];
    char nomeMae [80];
    char nomePai[80];
};

struct tipoFiliacao separaLinhaCSV(char linha[240])
{
    struct tipoFiliacao info;
    int i, j;

    for(i = 0, j = 0; linha[i] != ',' && linha[i] != '\0'; i++, j++)
    {
        info.nome[j] = linha[i];
    }
    info.nome[j] = '\0';

    if (linha[i] == ',') i++;

    for(j = 0; linha[i] != ',' && linha[i] != '\0'; i++, j++)
    {
        info.nomeMae[j] = linha[i];
    }
    info.nomeMae[j] = '\0';

    if (linha[i] == ',') i++;

    for(j = 0; linha[i] != '\0'; i++, j++)
    {
        info.nomePai[j] = linha[i];
    }
    info.nomePai[j] = '\0';


    return info;
}
