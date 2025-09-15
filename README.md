# Libft

Projet de l’école 42 (Paris).  
Réalisation d’une bibliothèque en langage C regroupant un ensemble de fonctions usuelles, afin de mieux comprendre leur fonctionnement interne et de pouvoir les réutiliser dans d’autres projets.

---

## Contenu

La bibliothèque implémente plusieurs catégories de fonctions :

### Fonctions de la libc
- `ft_strlen`
- `ft_strcpy`
- `ft_strdup`
- `ft_strncmp`
- `ft_atoi`
- `ft_calloc`
- etc.

### Fonctions supplémentaires
- `ft_substr`
- `ft_strjoin`
- `ft_split`
- `ft_itoa`
- `ft_strmapi`
- etc.

### Fonctions de manipulation de listes chaînées (`t_list`)
- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstadd_back`
- `ft_lstdelone`
- `ft_lstclear`
- etc.

---

## Compilation

La librairie se compile avec le Makefile fourni :

```bash
make        # compile la libft.a
make clean  # supprime les fichiers objets
make fclean # supprime objets + libft.a
make re     # recompile tout
