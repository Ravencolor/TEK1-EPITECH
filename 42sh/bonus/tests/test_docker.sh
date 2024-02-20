#!/bin/bash

# Lancer le conteneur Docker sans l'option -t ou --tty
PWD=$(pwd)
sudo docker run -v $PWD:/usr/data -i epitechcontent/epitest-docker:latest << EOF

# Commandes à exécuter à l'intérieur du conteneur Docker
cd ..
cd data
make test

# Sortir du conteneur Docker
exit

EOF
