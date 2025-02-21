🖥️ Mini-Shell – Terminal de commandes en C  

📝 Description du projet  

Ce projet consiste à recoder un terminal de commande en langage C, capable d'exécuter des commandes système et de gérer divers processus.

🎯 Objectif :  

Implémenter un interpréteur de commandes simple et fonctionnel.  
Gérer l’exécution de commandes UNIX en mode interactif.  
Prendre en charge les opérateurs de redirection (>, <), les pipes (|), et les processus en arrière-plan (&).  

💡 Défis techniques :  

Manipulation des appels système UNIX (fork(), execvp(), waitpid()).  
Gestion des signaux (SIGINT, SIGTSTP pour interrompre les processus).  
Implémentation de commandes intégrées comme cd, exit, etc.  

🚀 Fonctionnalités principales  

✅ Exécution de commandes UNIX classiques (ls, grep, echo, etc.) 🔄  
✅ Gestion des pipes (|) pour la communication entre processus 🛠️  
✅ Redirections d'entrée (<) et de sortie (>) 📝  
✅ Gestion des processus en arrière-plan (&) 🎭  
✅ Commandes intégrées (cd, exit) pour la navigation  

📸 Exemple d’utilisation  

```console

$ ./minishell
MiniShell> ls -l
MiniShell> echo "Bienvenue dans mon shell"
MiniShell> cd Documents
MiniShell> cat fichier.txt | grep "mot"
MiniShell> ps aux > process_list.txt
MiniShell> exit
```

🔹 Pipes (|) : Enchaîner les commandes  
🔹 Redirections (>, <) : Rediriger l’entrée et la sortie  
🔹 Processus en arrière-plan (&) : Exécuter sans bloquer le shell