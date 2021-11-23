/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:08:04 by jbuan             #+#    #+#             */
/*   Updated: 2021/11/11 14:59:05 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>

typedef struct s_list	t_list;
typedef enum e_list		t_num;
typedef struct s_group	t_group;

struct s_list
{
	int		content;
	int		tag;
	t_list	*next;
};

enum e_list
{
	min,
	max
};

struct s_group
{
	int	min;
	int	max;
	int	increment;
};

int		main(int argc, char *argv[]);
int		check_all_good(t_list **stack_a);
int		check_all_good_b(t_list **stack_b);
void	push_swap(t_list **stack_a, t_list **stack_b);
t_list	*ft_lstnew(int content, int tag);
int		min_max(t_list **stack_a, t_num extrem);
int		min_max_index(t_list *stack_a, t_num extrem);
int		min_max_content(t_list **stack_a, t_num extrem);
int		group_min(t_list **stack_a);
int		middle_stack(t_list **stack_a, int whole_stack);
int		middle_stack_signal(t_list **stack, int middle);
void	double_middle(t_list **stack_a, t_list **stack_b, int new_mid,
			int old_mid);
void	ft_lstadd_front(t_list **alst, t_list *new);
void	ft_lstadd_back(t_list **alst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
int		ft_atoi(const char *str);
int		print_list(t_list *s);
int		count_lst(t_list *s);
t_list	*copy_list_a(t_list *stack_a);
void	rotate_a(t_list **stack_a);
void	rotate_b(t_list **stack_b);
void	rotate_rotate(t_list **stack_a, t_list **stack_b);
void	rotate_rotate_end(t_list **stack_b);
void	reverse_rotate_a(t_list **stack_a);
void	reverse_rotate_b(t_list **stack_b);
void	reverse_rotate_rotate(t_list **stack_a, t_list **stack_b);
void	reverse_rotate_rotate_end(t_list **stack_b);
void	swap_a(t_list **stack_a);
void	swap_b(t_list **stack_b);
void	swap_swap(t_list **stack_a, t_list **stack_b);
void	swap_swap_end(t_list **stack_b);
void	parse_until_5(t_list **stack_a, t_list **stack_b);
void	parse_after_5(t_list **stack_a, t_list **stack_b);
void	push_a(t_list **stack_a, t_list **stack_b);
void	push_a_management(t_list **stack_a, t_list **stack_b, int min_pos);
void	push_b(t_list **stack_a, t_list **stack_b);
void	securities(char **argv, char **cpy_argv);
int		check_bit(t_list **stack_a, char **argv, int i);
int		check_duplicate(t_list *stack_a);
void	error_san(t_list **stack_a, char **split);
void	error_san_atoi(void);
void	free_split(char **cpy_argv);
void	sort_2(t_list **stack);
void	sort_3(t_list **stack);
void	sort_3_part_1(t_list **stack);
void	sort_3_part_2(t_list **stack);
void	sort_4(t_list **stack_a, t_list **stack_b);
void	sort_5(t_list **stack_a, t_list **stack_b);
void	sort_5_deep_1(t_list **stack_a, t_list **stack_b);
void	end_sorting(t_list **stack_a);
void	end_sorting_5(t_list **stack_a);
int		last_pos(t_list **stack_a);
int		last_pos_tag(t_list **stack_a);
void	sort_big_under_50(t_list **stack_a, t_list **stack_b);
void	sort_big(t_list **stack_a, t_list **stack_b, t_group *group);
void	sort_b(t_list **stack_b);
int		ft_putchar(char c);
int		ft_putstr(char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_strcmp(const char *s1, const char *s2);
char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *s);
void	ft_lstclear(t_list **lst);
void	which_index(t_list **stack_a, t_list **stack_b, int index1, int index2);
int		group_index(t_list **stack, t_group group);
void	push_management(t_list **stack_a, t_list **stack_b);
void	roll(t_list **stack, int i, void (*top)(), void (*bot)());
int		group_end(t_list *stack, t_group group);
int		signal_group(int content, t_group group);

#endif
