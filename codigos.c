int diff = abs(numeros[i] - numeros[j]);
if (diff < distancia){
    distancia = diff;
}

if(vetor[j] == numeros[i]){
    encontrado = 1;
    break;
}

if(lista[j]>lista[j+1]){
    // Troca os elementos de posição se estiverem fora de ordem
int *lista = (int *)malloc(n * sizeof(int));
for (int i = 0; i < n; i++) {
    lista[i] = 0;
    (lista[i] > maiorElemento){
        maiorElemento = lista[i];
        if(lista[i] == ult_nota){
            frequencia++;
            maior_nota = lista[i];
            if(lista[i] > maior_lista){
                maior_lista = lista[i];
                if(lista[i] == maior_lista && primeira_ocorrencia == 0){
                    primeira_ocorrencia = i;
                }
            }
        }
    }
    lista[i]++;
    temp = lista[j];
    lista[j] = lista[j+1];
    lista[j+1] = temp;
}
if (ordem1 == 'A') {
    if (ordem2 == 'B') {
        if (ordem3 == 'C') {
            if(ordem4 == 'D') {
                printf("%d %d %d %d\n", a, b, c, d);
    } else {
        printf("%d %d %d\n", b, a, c);
    }
} else if (ordem1 == 'B') {
    if (ordem2 == 'A') {
        if (ordem3 == 'C') {
            printf("%d %d %d\n", b, a, c);
        } else {
            printf("%d %d %d\n", b, c, a);
        }
    } else {
        printf("%d %d %d\n", a, b, c);
    }
} else {
    if (ordem2 == 'A') {
        printf("%d %d %d\n", c, a, b);
    } else {
        printf("%d %d %d\n", c, b, a);
    }
}
    if (num1 > num2) {
        double temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num2 > num3) {
        double temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if (num3 > num4) {
        double temp = num3;
        num3 = num4;
        num4 = temp;
    }
    if (num1 > num2) {
        double temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num2 > num3) {
        double temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if ((a < b + c) && (b < a + c) && (c < a + b)) {
        double perimetro = a + b + c;
        printf("Perimetro = %.1lf\n", perimetro);
    } else {
        double area = (a + b) * c / 2.0;
        printf("Area = %.1lf\n", area);
    }
 for (int testCase = 1; testCase <= numTestCases; testCase++) {
        int totalPessoas;
        double porcentagemPopular, porcentagemGeral, porcentagemArquibancada, porcentagemAssentos;
        double porcPop = porcentagemPopular * 0.1;
        double porcGer = porcentagemGeral * 0.3;
        printf("Digite o publico total de futebol:");
        scanf("%d", &totalPessoas);
        printf("Digite a porcentagem de pessoas que compraram ingresso na categoria popular: \n");
        scanf("%lf", &porcentagemPopular);
        printf("Digite a porcentagem geral do publico: \n");
        scanf("%lf", &porcentagemGeral);
        printf("Digite a porcentagem da arquibancada: \n");
        scanf("%lf", &porcentagemArquibancada);
        printf("Digite a porcentagem dos assentos: \n");
        scanf("%lf", &porcentagemAssentos);
        // scanf("%d %lf %lf %lf %lf", &totalPessoas, &porcentagemPopular, &porcentagemGeral, &porcentagemArquibancada, &porcentagemAssentos);

        
        double popularVendido = (porcentagemPopular / 100) * totalPessoas;
        double geralVendido = (porcentagemGeral / 100) * totalPessoas;
        double arquibancadaVendido = (porcentagemArquibancada / 100) * totalPessoas;
        double assentosVendido = (porcentagemAssentos / 100) * totalPessoas;

        double rendaTotal = (popularVendido * 1.0) + (geralVendido * 5.0) + (arquibancadaVendido * 10.0) + (assentosVendido * 20.0);

        printf("Caso #%d: R$ %.2lf\n", testCase, rendaTotal);
    }
    
    if(frequencia[x1] > max_frequencia[x2]){
        max_frequencia[x2] = frequencia[x1];
        resultado[x2] = x1;
        soma += vetor[i];
        resto = soma % 11;
        digito = (resto < 2) ? 0 : 11 - resto;
        if(vetor[9]!=digito){
            soma += vetor[i] * (11 - i);
            
        }
    }
    }
        case 'C':
            if (consumoAgua <= 80) {
                valorConta = taxaComercial;
            } else {
                valorConta = taxaComercial + custoMetroCubicoComercial * (consumoAgua - 80);
            }
            break;
        case 'I':
            if (consumoAgua <= 100) {
                valorConta = taxaIndustrial;
            } else {
                valorConta = taxaIndustrial + custoMetroCubicoIndustrial * (consumoAgua - 100);
            }
            break;
        case 'R':
        default:
            valorConta = taxaResidencial + 0.05 * consumoAgua;
            break;
    }
double calc_dist() {
    double nota_media = nota_inicial - nota_final;
    double frequencia = frequencia_inicial - frequencia_final;
    if (notaFinal >= NOTA_MINIMA && frequencia >= FREQUENCIA_MINIMA) {
        praia >= camarao && lago >= lagosta;
        printf("APROVADO\n");
    } else if (notaFinal < NOTA_MINIMA && frequencia >= FREQUENCIA_MINIMA) {
        
        printf("REPROVADO POR NOTA\n");
    } else if (notaFinal >= NOTA_MINIMA && frequencia < FREQUENCIA_MINIMA) {
        printf("REPROVADO POR FREQUENCIA\n");
    } else {
        printf("REPROVADO POR NOTA E POR FREQUENCIA\n");
    }
    if
}
    // Imprimir os resultados
    printf("CONTA = %d\n", numeroConta);
    printf("VALOR DA CONTA = %.2lf\n", valorConta);
soma = soma + vetor[i];
if(vetor[i] > maior)
    maior = vetor[i];
    indice = i;

soma += vetor[i];
if(vetor[i] > maiorElemento)
    maiorElemento = vetor[i];

if(vetor[i] > maiorElemento)   
    frequencia[j]++;
if(decimal > 1) {
    decimalParaBinario(decimal / 2);
}
if(numer % 3 == 0 && numer % 5 == 0) {
    printf("O NUMERO E DIVISIVEL\n%d", numer);
} else {
    printf("O NUMERO NAO E DIVISIVEL\n%d", numer);
}
total = horas / 3 * 10.0;
total += horas % 3 * 5.0;
void encont_m_elem(cc,dr,rt){
    if(cc < 7 && dr > 50 && rt > 80000) {
        if(cc[i] > maiorElemento) {
            maiorElemento = cc[i];
            printf("ACO DE GRAU = 10\n");
        }
    } else if(cc < 7 && dr > 50) {
        printf("ACO DE GRAU = 9\n");
    } else if(cc < 7) {
        printf("ACO DE GRAU = 8\n");
    } else {
        printf("ACO DE GRAU = 7\n");
    }
if(salario_funcionario > doze_salarios_minimos) {
    imposto_bruto = 0.20 * salario_funcionario;
}
original = numero;
if (numero > 99999) {
    return 0;
    while (numero > 0) {digito = numero % 10;
        numeroInvertido = numeroInvertido * 10 + digito;
        numero /= 10;
        if (original == numeroInvertido) {
            printf("PALINDROMO\n");
        } else {
            printf("NAO PALINDROMO\n");
        }
    }
}
