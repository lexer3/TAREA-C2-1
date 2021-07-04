void potencia(float (*m1)[5], int p, float (*r)[5])

//=====================================================
//COLABORADOR 3 
//WENDY ROBINZON 
//A MI ME TOCO SACAR LA POTENCIA DE LAS MATRICES
    //AQUI VAMOS A OBTENER LA POTENCIA DE UNA MATRIZ

    for (int a=0;a<2;a++)
    {
         for (int b=0;b<2;b++)
         {
          matrizresultado[a][b]=0;
          matrizresultado[a][b]=matrizresultado[a][b]+matriz1[a][b]*matriz1[a][b];
         }
    }
    cout<<"\nPARA LA POTENCIA DE LA MATRIZ 1,ES:\n";

    for(int a=0;a<2;a++)
    {
        for(int b=0;b<2;b++)
        {
            cout<<matrizresultado[a][b]<<" ";
        }
        cout<<"\n";
    }

        break;

          
case 4:
//=====================================================
