#include <iostream>
#include <locale.h>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int opcao;
	char con;
	
	cout << "Trabalho feito por: Octavio Polari\nMatr�cula: 2019104104\n";
	cout << "\nSeu Personagem acorda no meio de uma floresta deconhecida e olha ao seu redor para se localizar. Ent�o levanta e decide tomar um caminho, tendo duas op��es: \nSeguir pelo caminho � sua frente ou � sua direita. \nQual ele escolhe?\n ";
	cout << "\n1: Segue em frente.";
	cout << "\n2: Segue pela direita.\n\n";
	cin >> opcao;
	
	if (opcao == 1)
	{
		cout << "\nEnt�o, depois de pensar bastante, seu Personagem decide seguir em frente. Depois de andar por umas 3h, ele encontra uma Espada Longa. O que voc� faz?\n";
		cout << "\n1: Pega a espada.";
		cout << "\n2: Continua o caminho.\n\n";
	
		cin >> opcao;
		
		if (opcao == 1)
		{
			cout << "\nAssim que o Personagem pega a espada em suas m�os, ele analisa cuidadosamente e nota uma inscri��o ao longo de sua l�mina, que dizia o seguinte: CAPUT FRIGUS, FRIGUS COR MEUM. \nLogo ap�s ler tal escritura, ele v� flashes e lembra de seu passado e como foi parar naquela floresta. Aquela espada que estava empunhando era de seu antigo Rei, a quem servia lealmente. Este, por�m, veio a falecer em uma emboscada feita por soldados de um reino vizinho, que possu�a uma rixa com seu reino. \nLogo ap�s isso tudo, o Personagem decide voltar a seu reino para informar do falecimento de seu rei, pois todos os que o escoltavam haviam morrido. No meio do caminho, ele encontra um ogro que o bloqueia, com uma ma�a gigante em suas m�os. N�o havendo outras rotas pelas quais se possa passar sem ser visto, o Personagem entra em contato. O Her�i n�o possui armaduras, est� apenas com roupas simples e a espada de seu falecido Rei. O que ele pode tentar fazer?\n"; 
		    cout << "\n1: Tenta conversar.";
		    cout << "\n2: Parte para o ataque.\n\n";
		    cin >> opcao;
		    
		    if (opcao == 1)
		    {
		    	cout << "\nO Personagem se aproxima do Ogro, que se encontra na defensiva, botando a espada no ch�o em sua frente, tentando mostrar uma abordagem pac�fica. \nO Ogro fica intrigado e apenas observa o Her�i indo em sua dire��o. O Guerreiro para e n�o cr� na cena que v�: um Ogro com o polegar levantado e um sorriso no rosto. E ainda se pronuncia: N�o fique acanhado, n�o sou propriamente um ogro. Uma bruxa que morava por essas redondezas pediu minha ajuda e eu neguei, pois odiava bruxas na �poca. \nO Homem ent�o iniciou uma conversa longa e descobriu que ele tamb�m era um soldado de seu Rei, informando-lhe que este tinha acabado de falecer em uma emboscada. O Ogro, que se chamava Rowls, ficou extremamente triste, e pediu para acompanh�-lo em sua jornada de volta ao reino. Qual foi a decis�o do nobre Her�i?\n";
		    	cout << "\n1: Nega, pois tem medo de matarem os dois.";
		    	cout << "\n2: Aceita, pois entende a dor pela qual passa.\n\n";
				cin >> opcao;
				
				if (opcao == 1)
				{
					cout << "\nTendo em mente o bem-estar dos dois, nega o pedido, por�m diz que caso v� em uma miss�o de vingan�a, ir� cham�-lo para que possa ter a gl�ria de ver o mandante do assassinato de seu querido Rei, possibilitando sua recupera��o ao estado humanoide.\n";
					cout << "\nSeguindo caminho at� seu destino, passando por v�rios desafios que superou com extrema determina��o, chegou ao reino, informando a todos, e tudo ocorreu como imaginava: Foi planejado um ataque para vingar a morte de seu amado l�der. \nAssim sendo, foi chamar Rowls, por�m encontrou seu caro amigo decapitado com sua cabe�a pregada em um galho de �rvore pr�ximo a seu corpo queimado jogado no ch�o. Em respeito ao companheiro, deu-lhe um enterro devido, com direito a l�pide e discurso.\n";
				}		
			
			else if (opcao == 2)
			{
				cout << "\nAceitando o pedido do rec�m-conhecido, os dois partem em dire��o ao reino e, no meio do caminho, se deparam com soldados fazendo uma ronda pelas proximidades. Conforme foram se aproximando, os guardas ficaram em alerta e amea�aram atacar, caso se aproximassem mais. Depois de muito tempo se explicando, nosso Her�i fica em um impasse: ou atacar os guardas tamb�m, ou se manter na defensiva. \nO que ser� que ele faz?\n";
				cout << "\n1: Ataca, sem mais nem menos.";
				cout << "\n2: Se mant�m na defensiva.\n\n";
				cin >> opcao;
				
				if (opcao == 1)
				{
					cout << "\nDecidindo atacar, um dos guardas soa uma trombeta como forma de sinalizador e logo brotam uns men� com espadas pra furar os dois. \nDepois de uma troca��o de golpes intensa, nosso Her�i e seu amigo Ogro acabam morrendo brutalmente, com suas cabe�as sendo separadas de seus corpos em cortes limpos, assim acabando com sua jornada.\n";
				}
			
			    else if (opcao == 2)
			    {
			    	cout << "\nSe mantendo na defensiva, ele consegue convencer a lev�-los ao reino e informar a todos do ocorrido. Por�m, ap�s procurar seu amigo, o encontra de joelhos com sua cabe�a decapitada. Muito puto da vida, o Her�i segue para seu destino com sangue noz�io. \nChegando, informa a todos que seu Rei veio a falecer durante sua viajem. Ap�s, encontra sua fam�lia na bosta, pois eram nada sem ele em casa. Devido a isso, ele se oferece para governar o reino, j� que o anterior era jovem demais e n�o possu�a um progenitor. Ap�s dias, semanas, meses, o povo decide colocar nosso Her�i no poder, por ter sido o �nico a voltar vivo do acontecido. E assim viveu nosso Protagonista at� o fim de sua vida.";
				}
			}
			}
		
		else if (opcao == 2)
		{
			cout << "\nN�o vendo outra op��o, parte para o ataque. Tendo no��o de sua falta de equipamentos, fica cauteloso, andando t�o devagar que o ogro nem notou sua presen�a. Por�m, enquanto caminhava, pisou em um galho, e o Ogro o notou, fazendo com que o Her�i o atacasse. \nDepois de uma batalha intensa, o Guerreiro foi desarmado e golpeado na cabe�a pelo Monstro, vindo a falecer.\n";
		}
		}
		
		else if (opcao == 2)
		{
			cout << "\nEscolhendo n�o pegar a espada com medo de estar amaldi�oada ou algo do tipo, O Her�i seguiu caminho, sem saber exatamente para onde estava indo. \nFoi ent�o que viu um Ogro em sua frente, e, com toda a sua coragem, se aproximou deste e perguntou se poderia sanar suas d�vidas. O Monstro, com toda a educa��o do mundo, explicou que essa era uma floresta do Reino de Coreth, ao qual j� tinha pertencido um dia. O Ogro, por�m se envolveu com for�as malignas e acabou sendo punido divinamente por seus pecados, se transformando em um monstro, sendo que agora estava em busca de alguma forma de cura. \nCom toda sua generosidade, nosso Her�i oferece ajuda ao Ogro em sua jornada, e este fica extremamente feliz. Os dois partem em busca de alguma ajuda m�stica para reverter tal infort�nio.\n";
		}
	}
	
    else if (opcao == 2)
    {
	   cout << "\nDecidindo ir pela direita, no meio do caminho, � atacado por um goblin de surpresa. De alguma maneira, conseguiu aguent�-lo por um tempo, por�m caiu em uma armadilha de espinhos e morreu, sem saber de coisa alguma de seu passado.\n";
    }

    //else
    {
    	if (opcao == 1 || opcao == 2)
    	{
    		cout << "\n\nN�o julgue algu�m por sua apar�ncia ou ignore seus problemas, isso � coisa de gente idiota, voc� n�o � idiota, n�o � mesmo? ;)";
		}
	}
	
	getch();
}
