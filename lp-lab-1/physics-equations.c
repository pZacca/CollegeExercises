/*
Matrícula: [hidden]
Nome completo: Pedro Henrique Castro Zaccaria Rodrigues
Curso: Bacharelado em Ciência e Tecnologia
Semestre: 1º
*/

// Esse código contém blocos de código (funções void) que calculam 14 diferentes fórmulas da física onde o usuário escolhe qual quer usar.

// Diretivas de pré-processamento
#include <stdio.h>
#include <locale.h>
#include <math.h>

// Protótipo de funções
void calorimetria();
void ondulatoria();
void pot_eletrica();
void ohm();
void resistores();
void e_mecanica();
void e_cinetica();
void e_pot_grav();
void e_pot_elas();
void forca_eletrica();
void aceleracao_media();
void vel_media();
void mov_uniforme();
void mov_uni_variavel();

// Função principal
int main() {
    setlocale(LC_ALL, "Portuguese");  // Função que permite a acentuação correta do português
    int opc, i = 0;  // 'opc' é a escolha para o switch/case, 'i' é o mecanismo de saída ou não do menu
    while (i == 0) {
        printf("\n| 1  | Equação fundamental da calorimetria"
               "\n| 2  | Equação fundamental da ondulatória"
               "\n| 3  | Potencia eletrica"
               "\n| 4  | Lei de Ohm"
               "\n| 5  | Associacao de tres resistores"
               "\n| 6  | Energia mecanica"
               "\n| 7  | Energia cinetica"
               "\n| 8  | Energia potencial gravitacional"
               "\n| 9  | Energia potencial elástica"
               "\n| 10 | Força eletrica"
               "\n| 11 | Aceleração media"
               "\n| 12 | Velocidade media"
               "\n| 13 | Movimento uniforme (MU)"
               "\n| 14 | Movimento uniforme variado (MUV)"
               "\n| 0  | Sair do programa"
               "\nEquação desejada: ");
        i = 1;
        scanf("%d", &opc);

        // Cada case leva à execução de determinada função que contém as
        // respectivas linhas de código para a execução da equação de física desejada pelo usuário
        switch (opc) {
            case 1:
                calorimetria();
                break;

            case 2:
                ondulatoria();
                break;

            case 3:
                pot_eletrica();
                break;

            case 4:
                ohm();
                break;

            case 5:
                resistores();
                break;

            case 6:
                e_mecanica();
                break;

            case 7:
                e_cinetica();
                break;

            case 8:
                e_pot_grav();
                break;

            case 9:
                e_pot_elas();
                break;

            case 10:
                forca_eletrica();
                break;

            case 11:
                aceleracao_media();
                break;

            case 12:
                vel_media();
                break;

            case 13:
                mov_uniforme();
                break;

            case 14:
                mov_uni_variavel();
                break;

            case 0:
                printf("\nObrigado, volte sempre!\nCódigo feito por pZacca\n");
                break;

            default:
                i = 0;  // O menu é executado dentro de um while, antes do switch/case a variável 'i' recebe '1' fazendo-o rodar apenas uma vez,
                // com exceção de entradas inválidas que tornam o valor igual a 0 e fazem o menu rodar até receber uma entrada válida.
                printf("\nFavor inserir um número válido para uma equação,"
                       "caso deseje sair, digite 0\n");
        }
    }

    return 0;
}


// Outras funções
void calorimetria() {
    // Decaração de variáveis
    float qtd_calor, massa, calor_esp, delta_t;
    // Entrada e validação de dados
    printf("\nPara descobrir a quantidade de calor, insira os dados com valores numéricos maiores que zero");
    while(1) {
        printf("\nMassa: ");
        scanf("%f", &massa);
        if (massa <= 0) {
            printf("Favor digitar uma entrada válida.");
        } else break;
    }

    while(1) {
        printf("\nCalor Específico: ");
        scanf("%f", &calor_esp);
        if (calor_esp <= 0) {
            printf("Favor digitar uma entrada válida.");
        } else break;
    }

    while(1) {
        printf("\nVariação de temperatura: ");
        scanf("%f", &delta_t);
        if (delta_t < 0) {
            printf("\nFavor digitar uma entrada válida.");
        } else break;
    }
    // Processamento e saída de dados
    qtd_calor = massa * calor_esp * delta_t;
    printf("\n\tEq. Fundamental da Calorimetria"
           "\nMassa: %.2f"
           "\nCalor Específico: %.2f"
           "\nVariação de Temperatura: %.2f"
           "\nQuantidade de Calor: %.2f", massa, calor_esp, delta_t, qtd_calor);
}

void ondulatoria(){
    // Decaração de variáveis
    float velocidade, lambda, freq;
    printf("\nPara descobrir a velocidade, insira os dados com valores numéricos maiores que zero");
    // Entrada e validação de dados
    while(1) {
        printf("\nComprimento de onda: ");
        scanf("%f", &lambda);
        if(lambda <= 0){
            printf("Favor digitar uma entrada válida.");
        }else break;
    }

    while(1) {
        printf("\nFrequência: ");
        scanf("%f", &freq);
        if (freq <= 0) {
            printf("\nFavor digitar uma entrada válida.");
        } else break;
    }

    // Processamento e saída de dados
    velocidade = lambda * freq;
    printf("\n\tEq. Fundamental da ondulatória"
           "\nComprimento de onda: %.2f"
           "\nFrequência: %.2f"
           "\nVelocidade: %.2f", lambda, freq, velocidade);
}

void pot_eletrica(){
    // Decaração de variáveis
    float potencia, resistencia, corrente, tensao;
    int escolha;
    // Escolha do usuário do método a ser realizado
    while(1) {
        printf("\nDeseja descobrir a potência usando resistência e corrente ou tensão e corrente?"
               "\n| 1 | Tensão e Corrente"
               "\n| 2 | Resistência e Corrente\n");
        scanf("%d", &escolha);
        if(escolha != 1 && escolha != 2){
            printf("\nFavor escolher uma opção válida.");
        } else break;
    }

    // Entrada e validação de dados
    printf("\nPara descobrir a potência elétrica, insira os dados com valores numéricos maiores que zero");
    while(1) {
        printf("\nInsira a corrente elétrica: ");
        scanf("%f", &corrente);
        if(corrente <= 0){
            printf("\nFavor digitar uma entrada válida.");
        }else break;
    }

    // Entradas condicionais
    if(escolha == 1){
        while(1) {
            printf("\nInsira a tensão: ");
            scanf("%f", &tensao);
            if(tensao <= 0){
                printf("Favor digitar uma entrada válida.");
            }else break;
        }
    } else {
        while(1) {
            printf("\nInsira a resistência elétrica: ");
            scanf("%f", &resistencia);
            if(resistencia <= 0){
                printf("Favor digitar uma entrada válida.");
            }else break;
        }
    }
    // Processamento e saída de dados de acordo com a escolha
    if(escolha == 1){
        potencia = tensao * corrente;
        printf("\n\tPotência Elétrica"
               "\nTensão: %.2f"
               "\nCorrente: %.2f"
               "\nPotência elétrica: %.2f", tensao, corrente, potencia);
    } else {
        potencia = resistencia * pow(corrente, 2);
        printf("\n\tPotência Elétrica"
               "\nResistência: %.2f"
               "\nCorrente: %.2f"
               "\nPotência elétrica: %.2f", resistencia, corrente, potencia);
    }
}

void ohm(){
    // Decaração de variáveis
    float resistencia, corrente, tensao;
    printf("\nPara descobrir a tensão elétrica, insira os dados com valores numéricos maiores que zero");
    // Entrada e validação de dados
    while(1) {
        printf("\nInsira a corrente: ");
        scanf("%f", &corrente);
        if(corrente <= 0){
            printf("\nFavor digitar uma entrada válida.");
        } else break;
    }

    while(1) {
        printf("\nInsira a resistência: ");
        scanf("%f", &resistencia);
        if(resistencia <= 0){
            printf("\nFavor digitar uma entrada válida.");
        } else break;
    }

    // Processamento e saída de dados
    tensao = resistencia * corrente;
    printf("\n\tLei de Ohm"
           "\nResistência: %.2f"
           "\nCorrente: %.2f"
           "\nTensão elétrica: %.2f", resistencia, corrente, tensao);
}

void resistores(){
    // Decaração de variáveis
    float res1, res2, res3, req;
    int escolha;
    // Escolha do usuário do método a ser realizado
    while (1) {
        printf("\nOs resistores estão em paralelo ou em série?"
               "\n| 1 | Série"
               "\n| 2 | Paralelo");
        scanf("%d", &escolha);
        if (escolha != 1 && escolha != 2){
            printf("\nFavor inserir uma alternativa válida.");
        } else break;
    }

    // Entrada e validação de dados
    printf("\nPara descobrir a resistência equivalente, insira os dados com valores numéricos maiores que zero");
    while(1) {
        printf("\nInsira o primeiro resistor: ");
        scanf("%f", &res1);
        if(res1 <= 0){
            printf("Favor digitar uma entrada válida.");
        }else break;
    }

    while(1) {
        printf("\nInsira o segundo resistor: ");
        scanf("%f", &res2);
        if(res1 <= 0){
            printf("Favor digitar uma entrada válida.");
        }else break;
    }

    while(1) {
        printf("\nInsira o terceiro resistor: ");
        scanf("%f", &res3);
        if(res1 <= 0){
            printf("Favor digitar uma entrada válida.");
        }else break;
    }

    // Processamento e saída de dados
    if (escolha == 1){
        req = res1 + res2 + res3;
    } else {
        req = 1 / ((1/res1) + (1/res2) + (1/res3));
    }

    printf("\n\tAssociação de três resistores"
           "\nResistor 1: %.2f"
           "\nResistor 2: %.2f"
           "\nResistor 3: %.2f"
           "\nResistência equivalente: %.2f", res1, res2, res3, req);
}

void e_mecanica(){
    // Decaração de variáveis
    float en_mecanica, en_potencial, en_cinetica;
    // Entrada e validação de dados
    printf("\nPara descobrir a energia mecânica, insira os dados com valores numéricos maiores ou igual a zero");
    while(1) {
        printf("\nInsira a energia potencial: ");
        scanf("%f", &en_potencial);
        if(en_potencial < 0){
            printf("\nFavor digitar uma entrada válida.");
        } else break;
    }

    while(1) {
        printf("\nInsira a energia cinética: ");
        scanf("%f", &en_cinetica);
        if(en_cinetica < 0){
            printf("\nFavor digitar uma entrada válida.");
        } else break;
    }

    // Processamento e saída de dados
    en_mecanica = en_cinetica + en_potencial;
    printf("\n\tEnergia mecânica"
           "\nEnergia potencial: %.2f"
           "\nEnergia cinética: %.2f"
           "\nEnergia mecânica: %.2f", en_potencial, en_cinetica, en_mecanica);
}

void e_cinetica(){
    // Decaração de variáveis
    float en_cinetica, massa, velocidade;
    // Entrada e validação de dados
    printf("\nPara descobrir a energia cinética, insira os dados com valores numéricos maiores que zero");
    while(1) {
        printf("\nInsira a massa: ");
        scanf("%f", &massa);
        if(massa <= 0){
            printf("\nFavor digitar uma entrada válida.");
        }else break;
    }

    while(1) {
        printf("\nInsira a velocidade: ");
        scanf("%f", &velocidade);
        if(velocidade <= 0){
            printf("\nFavor digitar uma entrada válida.");
        } else break;
    }
    // Processamento e saída de dados
    en_cinetica = (massa * pow(velocidade, 2)) / 2;
    printf("\n\tEnergia cinética"
           "\nMassa: %.2f"
           "\nVelocidade: %.2f"
           "\nEnergia cinética: %.2f", massa, velocidade, en_cinetica);
}

void e_pot_grav(){
    // Decaração de variáveis
    float massa, altura, gravidade, en_pot_grav;
    // Entrada e validação de dados
    printf("\nPara descobrir a energia potencial gravitacional, insira os dados com valores numéricos maiores que zero");
    while(1) {
        printf("\nInsira a massa: ");
        scanf("%f", &massa);
        if(massa <= 0) {
            printf("\nFavor digitar uma entrada válida.");
        } else break;
    }

    while(1) {
        printf("\nInsira a altura: ");
        scanf("%f", &altura);
        if(altura <= 0) {
            printf("\nFavor digitar uma entrada válida.");
        } else break;
    }

    while(1) {
        printf("\nInsira a aceleração gravitacional: ");
        scanf("%f", &gravidade);
        if(gravidade <= 0) {
            printf("\nFavor digitar uma entrada válida.");
        } else break;
    }

    // Processamento e saída de dados
    en_pot_grav = altura * massa * gravidade;
    printf("\n\tEnergia potencial gravitacional"
           "\nAltura: %.2f"
           "\nMassa: %.2f"
           "\nEnergia potencial gravitacional: %.2f", altura, massa, en_pot_grav);
}

void e_pot_elas(){
    // Decaração de variáveis
    float const_elastica, deform_mola, en_pot_elas;
    // Entrada e validação de dados
    printf("\nPara descobrir a energia potencial elástica, insira os dados com valores numéricos maiores que zero");
    while(1) {
        printf("\nInsira a constante elástica da mola: ");
        scanf("%f", &const_elastica);
        if(const_elastica <= 0) {
            printf("\nFavor digitar uma entrada válida.");
        } else break;
    }

    while(1) {
        printf("\nInsira a deformação da mola: ");
        scanf("%f", &deform_mola);
        if(deform_mola <= 0) {
            printf("\nFavor digitar uma entrada válida.");
        } else break;
    }

    // Processamento e saída de dados
    en_pot_elas = (const_elastica * pow(deform_mola, 2)) / 2;
    printf("\n\tEnergia potencial elástica"
           "\nConstante elástica da mola: %.2f"
           "\nDeformação da mola: %.2f"
           "\nEnergia potencia elástica: %.2f", const_elastica, deform_mola, en_pot_elas);
}

void forca_eletrica(){
    // Decaração de variáveis
    float forca_el, const_eletrostatica, carga1, carga2, distancia;
    // Entrada e validação de dados
    printf("\nPara descobrir a , insira os dados com valores numéricos maiores que zero");
    while(1) {
        printf("\nInsira a constante eletrostatica: ");
        scanf("%f", &const_eletrostatica);
        if(const_eletrostatica <= 0) {
            printf("\nFavor digitar uma entrada válida.");
        } else break;
    }

    while(1) {
        printf("\nInsira a distância: ");
        scanf("%f", &distancia);
        if(distancia <= 0) {
            printf("\nFavor digitar uma entrada válida.");
        } else break;
    }

    while(1) {
        printf("\nInsira o valor da carga elétrica 1: ");
        scanf("%f", &carga1);
        if(carga1 <= 0) {
            printf("\nFavor digitar uma entrada válida.");
        } else break;
    }

    while(1) {
        printf("\nInsira o valor da carga elétrica 2: ");
        scanf("%f", &carga2);
        if(carga2 <= 0) {
            printf("\nFavor digitar uma entrada válida.");
        } else break;
    }

    // Processamento e saída de dados
    forca_el = const_eletrostatica * ((carga1 * carga2) / (pow(distancia, 2)));
    printf("\nForça elétrica"
           "\nConstante eletrostática: %.2f"
           "\nDistância: %.2f"
           "\nCarga elétrica 1: %.2f"
           "\nCarga elétrica 2: %.2f"
           "\nForça elétrica: %.2f", const_eletrostatica, distancia, carga1, carga2, forca_el);
}

void aceleracao_media(){
    // Escolha do usuário do método a ser realizado
    float acel_media, delta_v, delta_t;
    // Entrada e validação de dados
    printf("\nPara descobrir a aceleração média, insira os dados com valores numéricos maiores que zero");
    while(1) {
        printf("\nInsira a variação de velocidade: ");
        scanf("%f", &delta_v);
        if(delta_v <= 0) {
            printf("\nFavor digitar uma entrada válida.");
        } else break;
    }

    while(1) {
        printf("\nInsira a variação de tempo: ");
        scanf("%f", &delta_t);
        if(delta_t <= 0) {
            printf("\nFavor digitar uma entrada válida.");
        } else break;
    }

    // Processamento e saída de dados
    acel_media = delta_v / delta_t;
    printf("\n\tAceleração média"
           "\nVariação de velocidade: %.2f"
           "\nVariação de tempo: %.2f"
           "\nAceleração média: %.2f", delta_v, delta_t, acel_media);
}

void vel_media(){
    // Decaração de variáveis
    float vel_media, delta_s, delta_t;
    // Entrada e validação de dados
    printf("\nPara descobrir a aceleração média, insira os dados com valores numéricos maiores que zero");
    while(1) {
        printf("\nInsira a variação de espaço: ");
        scanf("%f", &delta_s);
        if(delta_s <= 0) {
            printf("\nFavor digitar uma entrada válida.");
        } else break;
    }

    while(1) {
        printf("\nInsira a variação de tempo: ");
        scanf("%f", &delta_t);
        if(delta_t <= 0) {
            printf("\nFavor digitar uma entrada válida.");
        } else break;
    }

    // Processamento e saída de dados
    vel_media = delta_s / delta_t;
    printf("\n\tAceleração média"
           "\nVariação de espaço: %.2f"
           "\nVariação de tempo: %.2f"
           "\nVelocidade média: %.2f", delta_s, delta_t, vel_media);
}

void mov_uniforme() {
    // Decaração de variáveis
    float espaco_total, espaco_inicial, velocidade, tempo;
    // Entrada e validação de dados
    printf("\nPara descobrir o espaço percorrido, insira os dados com valores numéricos maiores ou iguais a zero");
    while (1) {
        printf("\nInsira o espaço inicial: ");
        scanf("%f", &espaco_inicial);
        if (espaco_inicial < 0) {
            printf("\nFavor digitar uma entrada válida.");
        } else break;
    }

    while (1) {
        printf("\nInsira a velocidade: ");
        scanf("%f", &velocidade);
        if (velocidade < 0) {
            printf("\nFavor digitar uma entrada válida.");
        } else break;
    }

    while (1) {
        printf("\nInsira o tempo: ");
        scanf("%f", &tempo);
        if (tempo < 0) {
            printf("\nFavor digitar uma entrada válida.");
        } else break;
    }

    // Processamento e saída de dados
    espaco_total = espaco_inicial + velocidade * tempo;
    printf("\n\tMovimento uniforme (MU)"
           "\nEspaço inicial: %.2f"
           "\nVelocidade: %.2f"
           "\nTempo: %.2f"
           "\nEspaço percorrido: %.2f", espaco_inicial, velocidade, tempo, espaco_total);
}

void mov_uni_variavel(){
    // Decaração de variáveis
    float espaco_total, espaco_inicial, velocidade, tempo, aceleracao;
    // Entrada e validação de dados
    printf("\nPara descobrir o espaço percorrido, insira os dados com valores numéricos maiores ou iguais a zero");
    while (1) {
        printf("\nInsira o espaço inicial: ");
        scanf("%f", &espaco_inicial);
        if (espaco_inicial < 0) {
            printf("\nFavor digitar uma entrada válida.");
        } else break;
    }

    while (1) {
        printf("\nInsira a velocidade: ");
        scanf("%f", &velocidade);
        if (velocidade < 0) {
            printf("\nFavor digitar uma entrada válida.");
        } else break;
    }

    while (1) {
        printf("\nInsira o tempo: ");
        scanf("%f", &tempo);
        if (tempo < 0) {
            printf("\nFavor digitar uma entrada válida.");
        } else break;
    }

    while(1) {
        printf("\nInsira a aceleração: ");
        scanf("%f", &aceleracao);
        if(aceleracao <= 0) {
            printf("\nFavor digitar uma entrada válida.");
        } else break;
    }

    // Processamento e saída de dados
    espaco_total = espaco_inicial + velocidade * tempo + aceleracao/2 * pow(tempo, 2);
    printf("\n\tMovimento uniforme variado (MUV)"
           "\nEspaço inicial: %.2f"
           "\nVelocidade: %.2f"
           "\nTempo: %.2f"
           "\nAceleração: %.2f"
           "\nEspaço percorrido: %.2f", espaco_inicial, velocidade, tempo, aceleracao, espaco_total);
}
