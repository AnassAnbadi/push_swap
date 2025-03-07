
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_list
{
    int				index;
    int				position;
    int				value;
    struct s_list	*next;
}	t_list;

void	process_args(int arg_count, char **arg_values, t_list **stack_a);

size_t	ft_strlen(char *str);
void	ft_write(char *str);
int		ft_isspace(char c);
int		ft_isallspace(char *str);

int		ft_isint(char *str);
long	ft_atol(const char *str);

char	**ft_split(char const *s, char c);
char	**ft_free(char **split_arr, int index);

t_list	*list_last(t_list *list);
int		list_size(t_list *list);
void	list_add_back(t_list **list, t_list *new_node);
void	list_create(t_list **list, int val);
void	list_free(t_list **list);

void	list_swap(t_list *list);
void	list_push(t_list **to, t_list **from);
void	list_rotate(t_list **list);
void	list_reverse_rotate(t_list **list);

void	sa(t_list *stack_a);
void	sb(t_list *stack_b);
void	ss(t_list *stack_a, t_list *stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);

int		find_min(t_list *list);
int		find_max(t_list *list);
int		find_max_position(t_list *list);
int		is_sorted(t_list *list);
void	sort_3(t_list **stack_a);
void	sort_4(t_list **stack_a, t_list **stack_b);
void	sort_5(t_list **stack_a, t_list **stack_b);
void	sort(t_list **stack_a, t_list **stack_b);

#endif