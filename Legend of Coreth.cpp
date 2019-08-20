#include <iostream>
#include <locale.h>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int opcao;
	char con;
	
	cout << "Trabalho feito por: Octavio Polari\nMatrícula: 2019104104\n";
	cout << "\nSeu Personagem acorda no meio de uma floresta deconhecida e olha ao seu redor para se localizar. Então levanta e decide tomar um caminho, tendo duas opções: \nSeguir pelo caminho à sua frente ou à sua direita. \nQual ele escolhe?\n ";
	cout << "\n1: Segue em frente.";
	cout << "\n2: Segue pela direita.\n\n";
	cin >> opcao;
	
	if (opcao == 1)
	{
		cout << "\nEntão, depois de pensar bastante, seu Personagem decide seguir em frente. Depois de andar por umas 3h, ele encontra uma Espada Longa. O que você faz?\n";
		cout << "\n1: Pega a espada.";
		cout << "\n2: Continua o caminho.\n\n";
	
		cin >> opcao;
		
		if (opcao == 1)
		{
			cout << "\nAssim que o Personagem pega a espada em suas mãos, ele analisa cuidadosamente e nota uma inscrição ao longo de sua lâmina, que dizia o seguinte: CAPUT FRIGUS, FRIGUS COR MEUM. \nLogo após ler tal escritura, ele vê flashes e lembra de seu passado e como foi parar naquela floresta. Aquela espada que estava empunhando era de seu antigo Rei, a quem servia lealmente. Este, porém, veio a falecer em uma emboscada feita por soldados de um reino vizinho, que possuía uma rixa com seu reino. \nLogo após isso tudo, o Personagem decide voltar a seu reino para informar do falecimento de seu rei, pois todos os que o escoltavam haviam morrido. No meio do caminho, ele encontra um ogro que o bloqueia, com uma maça gigante em suas mãos. Não havendo outras rotas pelas quais se possa passar sem ser visto, o Personagem entra em contato. O Herói não possui armaduras, está apenas com roupas simples e a espada de seu falecido Rei. O que ele pode tentar fazer?\n"; 
		    cout << "\n1: Tenta conversar.";
		    cout << "\n2: Parte para o ataque.\n\n";
		    cin >> opcao;
		    
		    if (opcao == 1)
		    {
		    	cout << "\nO Personagem se aproxima do Ogro, que se encontra na defensiva, botando a espada no chão em sua frente, tentando mostrar uma abordagem pacífica. \nO Ogro fica intrigado e apenas observa o Herói indo em sua direção. O Guerreiro para e não crê na cena que vê: um Ogro com o polegar levantado e um sorriso no rosto. E ainda se pronuncia: Não fique acanhado, não sou propriamente um ogro. Uma bruxa que morava por essas redondezas pediu minha ajuda e eu neguei, pois odiava bruxas na época. \nO Homem então iniciou uma conversa longa e descobriu que ele também era um soldado de seu Rei, informando-lhe que este tinha acabado de falecer em uma emboscada. O Ogro, que se chamava Rowls, ficou extremamente triste, e pediu para acompanhá-lo em sua jornada de volta ao reino. Qual foi a decisão do nobre Herói?\n";
		    	cout << "\n1: Nega, pois tem medo de matarem os dois.";
		    	cout << "\n2: Aceita, pois entende a dor pela qual passa.\n\n";
				cin >> opcao;
				
				if (opcao == 1)
				{
					cout << "\nTendo em mente o bem-estar dos dois, nega o pedido, porém diz que caso vá em uma missão de vingança, irá chamá-lo para que possa ter a glória de ver o mandante do assassinato de seu querido Rei, possibilitando sua recuperação ao estado humanoide.\n";
					cout << "\nSeguindo caminho até seu destino, passando por vários desafios que superou com extrema determinação, chegou ao reino, informando a todos, e tudo ocorreu como imaginava: Foi planejado um ataque para vingar a morte de seu amado líder. \nAssim sendo, foi chamar Rowls, porém encontrou seu caro amigo decapitado com sua cabeça pregada em um galho de árvore próximo a seu corpo queimado jogado no chão. Em respeito ao companheiro, deu-lhe um enterro devido, com direito a lápide e discurso.\n";
				}		
			
			else if (opcao == 2)
			{
				cout << "\nAceitando o pedido do recém-conhecido, os dois partem em direção ao reino e, no meio do caminho, se deparam com soldados fazendo uma ronda pelas proximidades. Conforme foram se aproximando, os guardas ficaram em alerta e ameaçaram atacar, caso se aproximassem mais. Depois de muito tempo se explicando, nosso Herói fica em um impasse: ou atacar os guardas também, ou se manter na defensiva. \nO que será que ele faz?\n";
				cout << "\n1: Ataca, sem mais nem menos.";
				cout << "\n2: Se mantém na defensiva.\n\n";
				cin >> opcao;
				
				if (opcao == 1)
				{
					cout << "\nDecidindo atacar, um dos guardas soa uma trombeta como forma de sinalizador e logo brotam uns menó com espadas pra furar os dois. \nDepois de uma trocação de golpes intensa, nosso Herói e seu amigo Ogro acabam morrendo brutalmente, com suas cabeças sendo separadas de seus corpos em cortes limpos, assim acabando com sua jornada.\n";
				}
			
			    else if (opcao == 2)
			    {
			    	cout << "\nSe mantendo na defensiva, ele consegue convencer a levá-los ao reino e informar a todos do ocorrido. Porém, após procurar seu amigo, o encontra de joelhos com sua cabeça decapitada. Muito puto da vida, o Herói segue para seu destino com sangue nozóio. \nChegando, informa a todos que seu Rei veio a falecer durante sua viajem. Após, encontra sua família na bosta, pois eram nada sem ele em casa. Devido a isso, ele se oferece para governar o reino, já que o anterior era jovem demais e não possuía um progenitor. Após dias, semanas, meses, o povo decide colocar nosso Herói no poder, por ter sido o único a voltar vivo do acontecido. E assim viveu nosso Protagonista até o fim de sua vida.";
				}
			}
			}
		
		else if (opcao == 2)
		{
			cout << "\nNão vendo outra opção, parte para o ataque. Tendo noção de sua falta de equipamentos, fica cauteloso, andando tão devagar que o ogro nem notou sua presença. Porém, enquanto caminhava, pisou em um galho, e o Ogro o notou, fazendo com que o Herói o atacasse. \nDepois de uma batalha intensa, o Guerreiro foi desarmado e golpeado na cabeça pelo Monstro, vindo a falecer.\n";
		}
		}
		
		else if (opcao == 2)
		{
			cout << "\nEscolhendo não pegar a espada com medo de estar amaldiçoada ou algo do tipo, O Herói seguiu caminho, sem saber exatamente para onde estava indo. \nFoi então que viu um Ogro em sua frente, e, com toda a sua coragem, se aproximou deste e perguntou se poderia sanar suas dúvidas. O Monstro, com toda a educação do mundo, explicou que essa era uma floresta do Reino de Coreth, ao qual já tinha pertencido um dia. O Ogro, porém se envolveu com forças malignas e acabou sendo punido divinamente por seus pecados, se transformando em um monstro, sendo que agora estava em busca de alguma forma de cura. \nCom toda sua generosidade, nosso Herói oferece ajuda ao Ogro em sua jornada, e este fica extremamente feliz. Os dois partem em busca de alguma ajuda mística para reverter tal infortúnio.\n";
		}
	}
	
    else if (opcao == 2)
    {
	   cout << "\nDecidindo ir pela direita, no meio do caminho, é atacado por um goblin de surpresa. De alguma maneira, conseguiu aguentá-lo por um tempo, porém caiu em uma armadilha de espinhos e morreu, sem saber de coisa alguma de seu passado.\n";
    }

    //else
    {
    	if (opcao == 1 || opcao == 2)
    	{
    		cout << "\n\nNão julgue alguém por sua aparência ou ignore seus problemas, isso é coisa de gente idiota, você não é idiota, não é mesmo? ;)";
		}
	}
	
	getch();
}
