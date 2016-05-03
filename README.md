VFO-DO
RF Generator, Kicad project

VFO-DO est un générateur HF couvrant de quelques kHz à 100 MHz
Il s'agit d'une idée originale de Gene Marcus W3PM/GM4YRE
et publié dans un article de la revue QEX 
http://www.arrl.org/files/file/QEX_Next_Issue/2015/Jul-Aug_2015/Marcus.pdf

Ce projet Kicad n'est que la transposition dudit projet. 

La propriété intellectuelle et les droits de publication appartiennent respectivement 
à l'auteur et à la société de publication mentionnés

Ce projet Kicad poursuit deux buts : 

- offrir à chaque débutant en électronique ou en radioélectricité les éléments nécessaires
à la construction d'une source de fréquence excessivement stable (précise au Herz près, puisque pilotée par l'étalon césium
de l'essaim de satellites GPS). 

- étendre cette réalisation, après modification du firmware, avec un filtre 

https://github.com/F6ITU/FiltreU

commuté de 8 bandes 

https://github.com/F6ITU/octorelay

qui éliminera en grande partie les harmoniques du générateur -lequel génère des signaux carrés-

De cette manière, la pureté spectrale est largement suffisante pour satisfaire la majorité des 
débutants en électronique "haute fréquence"

Le filtre n'est absolument pas nécessaire si l'oscillateur est utilisé en guise de VFO, surtout dans 
le cadre d'un mélangeur Tayloe ou assimilé. 
Cette réalisation peut également servir d'équipement de terrain, là ou le déplacement d'un oscillateur asservi
-équipement fragile et coûteux- est inenvisageable.

NB : le coût générateur gravite aux environ des 30 euros, le filtre se situant peu ou prou dans la 
même zone de prix une fois tous les composants achetés. Cela fait oublier le bruit de phase
de l'oscillateur, lequel est assez catastrophique, surtout si on le compare à celui d'un OCXO ou 
TCXO. 

