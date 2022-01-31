#!/bin/bash

GREEN='\033[0;32m'
NOCOLOR='\033[0m'

make re
echo -e "${GREEN}Voici le texte de test:${NOCOLOR}"
cat test.txt
echo ""
echo -e "${GREEN}Test 1: remplacement des \"Je\" par \"cool\"${NOCOLOR}"
./replace test.txt Je cool
echo -e "${GREEN}Resultat :${NOCOLOR}"
cat test.txt.replace
rm test.txt.replace
echo ""
echo -e "${GREEN}Test 2: remplacement des \"e\" par \"#\"${NOCOLOR}"
./replace test.txt e \#
echo -e "${GREEN}Resultat :${NOCOLOR}"
cat test.txt.replace
rm test.txt.replace
echo ""
echo -e "${GREEN}Test 3: remplacement des \"tralala.\\nbisous.\" par \"AAAAAAAAAAHHHHHHHH\"${NOCOLOR}"
./replace test.txt "tralala.
bisous." \"AAAAAAAAAAHHHHHHHH\"
echo -e "${GREEN}Resultat :${NOCOLOR}"
cat test.txt.replace
rm test.txt.replace
echo ""
echo -e "${GREEN}Test ERREURS: nom de fichier invalide${NOCOLOR}"
echo "./replace fichier_qui_n_existe_pas Je cool"
./replace fichier_qui_n_existe_pas Je cool
echo -e "${GREEN}Test ERREURS: str1 vide${NOCOLOR}"
echo "./replace test.txt \"\" \"yo\""
./replace test.txt "" "yo"
echo -e "${GREEN}Test ERREURS: 0 arguments${NOCOLOR}"
echo "./replace"
./replace
echo -e "${GREEN}Test ERREURS: Trop d'arguments${NOCOLOR}"
echo "./replace test.txt \"\" \"yo\" cool salut"
./replace test.txt \"\" \"yo\" cool salut
echo ""
echo -e "${GREEN}Executing make fclean${NOCOLOR}"
make fclean




