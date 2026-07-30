# Automação da Incubadora InChoc

O presente projeto tem como finalidade promover técnicas para a automação da rolagem de ovos de uma incubadora da marca InChoc. 

Tendo em vista a necessidade de realizar, em um certo período, a rolagem dos ovos que estão num processo de incubação, observa-se uma grande limitação aquela chocadeira que necessita a atenção do operador na ativação da rolagem. A chocadeira utilizada como meio de execução deste projeto possuia tal limitação, a qual foi extirpada.

## Tecnologias utilizadas

* Arduíno Nano V3;
* Módulo RTC DS3231;
* Módulo relé;
* Módulo redutor de tensão;
* Arduíno IDE;
* C++;
* Fusion 360;

## Funcionalidade Implementada

Adiciona a rolagem automática dos ovos da chocadeira, garantindo maior praticidade e eficiência nos processos de incubação. 

**Horários de rolagem**

- 6:00h às 6:10h;
- 14:00h às 14:10h;
- 22:00h às 22:10h;

## Estrutura de diretórios

```text
.
├── cad/
│   ├── protetor-principal.stl                      // caixa protetora para impressão
│   └── protetor-tampa.stl                          // tampa para impressão
├── docs/
│   └── specifications.md                           // especificações técnicas do projeto
├── images/
├── src/
│   ├── controller/                                 // contém o código que controla os períodos de rolagem
│   ├── rtc-test/                                   // contém métodos para teste do RTC DS3231
│   └── set-date/                                   // contém o código para definição do horário marcado pelo relógio
└── README.md
```

## Dependências do Código C++

Para comunicação efetiva com o módulo RTC DS3231, foi necessária a utilização da biblioteca DS3231 nos códigos. Segue o link para seu repositório:

```http request
https://github.com/NorthernWidget/DS3231
```

Autor: **Ariel Marques**