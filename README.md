VFO-DO
RF Generator, Kicad project

VFO-DO est un g�n�rateur HF couvrant de quelques kHz � 100 MHz
Il s'agit d'une id�e originale de Gene Marcus W3PM/GM4YRE
et publi� dans un article de la revue QEX 
http://www.arrl.org/files/file/QEX_Next_Issue/2015/Jul-Aug_2015/Marcus.pdf

Ce projet Kicad n'est que la transposition dudit projet. 

La propri�t� intellectuelle et les droits de publication appartiennent respectivement 
� l'auteur et � la soci�t� de publication mentionn�s

Ce projet Kicad poursuit deux buts : 

- offrir � chaque d�butant en �lectronique ou en radio�lectricit� les �l�ments n�cessaires
� la construction d'une source de fr�quence excessivement stable (pr�cise au Herz pr�s, puisque pilot�e par l'�talon c�sium
de l'essaim de satellites GPS). 

- �tendre cette r�alisation, apr�s modification du firmware, avec un filtre 

https://github.com/F6ITU/FiltreU

commut� de 8 bandes 

https://github.com/F6ITU/octorelay

qui �liminera en grande partie les harmoniques du g�n�rateur -lequel g�n�re des signaux carr�s-

De cette mani�re, la puret� spectrale est largement suffisante pour satisfaire la majorit� des 
d�butants en �lectronique "haute fr�quence"

Le filtre n'est absolument pas n�cessaire si l'oscillateur est utilis� en guise de VFO, surtout dans 
le cadre d'un m�langeur Tayloe ou assimil�. 
Cette r�alisation peut �galement servir d'�quipement de terrain, l� ou le d�placement d'un oscillateur asservi
-�quipement fragile et co�teux- est inenvisageable.

NB : le co�t g�n�rateur gravite aux environ des 30 euros, le filtre se situant peu ou prou dans la 
m�me zone de prix une fois tous les composants achet�s. Cela fait oublier le bruit de phase
de l'oscillateur, lequel est assez catastrophique, surtout si on le compare � celui d'un OCXO ou 
TCXO. 

