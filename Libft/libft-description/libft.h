/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:59:27 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/07/12 04:05:50 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_isalpha(int c);//verilen karakterin alfabede olup olmadığını kontrol eder
int		ft_isdigit(int c);//verilen karakterin rakam olup olmadığını kontrol eder
int		ft_isalnum(int c);//verilen karakterin alfanumerik olup olmadığını kontrol eder
int		ft_isascii(int c);//verilen karakterin ascii olup olmadığını kontrol eder
int		ft_isprint(int c);//verilen karakterin yazdırılabilir olup olmadığını kontrol eder
size_t	ft_strlen(const char *s);//verilen stringin uzunluğunu hesaplar
void	*ft_memset(void *b, int c, size_t len);//verilen bellek bloğunu belirtilen karakterle doldurur
void	ft_bzero(void *s, size_t n);//verilen bellek bloğunu sıfırlar(null ile doldurur)
void	*ft_memcpy(void *dst, const void *src, size_t n);//verilen bellek bloğunu başka bir bellek bloğuna kopyalar
void	*ft_memmove(void *dst, const void *src, size_t len);// verilen srcyi dest'e len kadar, src daha küçük olursa sondan kopyalar dst küçükse basindan kopyalar.
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);//src den dste dstsize -1 kadar kopyalar ve src nin uzunluğunu döndürür
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);//destsize kadar dst'nin sonuna src'yi ekler. destin uzunluğu ile srcnin o anki indexini yazdırır.
int		ft_toupper(int c);// karakteri büyük harfe çevirir.
int		ft_tolower(int c);// karakteri küçük harfe çevirir.
char	*ft_strchr(const char *s, int c);// s'in içinde c yi baştan arar ve bulursa o karakterden sonrasını döndürür.
char	*ft_strrchr(const char *s, int c);// s içinde c yi sondan arar bulursa  o karakteri döndürür.
int		ft_strncmp(const char *s1, const char *s2, size_t n);// s1 ve s2'yi n kadar karşılaştırır ve farklarını döndürür.
void	*ft_memchr(const void *s, int c, size_t n);// stringe bakarak c karakterini arar ve bulursa o karakterin adresini döndürür.
int		ft_memcmp(const void *s1, const void *s2, size_t n);// str1 ve str2'yi n kadar karşılaştırır ve farklarını döndürür.
char	*ft_strnstr(const char *str, const char *to_find, size_t n);//haystack içinde needle'ı n kadar arar ve bulursa karakterin adresini döndürür
int		ft_atoi(const char *str);//stringi int'e çevirir
void	*ft_calloc(size_t count, size_t size);//count * size kadar bellek ayırır ve null ile doldurur.
char	*ft_strdup(const char *s1);//stringi malloc ile bellek ayırıp yeni bir stringe atıp onu döndürür.
char	*ft_substr(char const *str, unsigned int start, size_t len);//verilen stringin start index'inden itibaren len kadar kopyalar.eğer len starttan sonra verilebilecek stringden büyükse len verilebilecek max değere çekilir
char	*ft_strjoin(char const *str1, char const *str2);// iki stringi mallocla yer alıp birleştirir birleştirilen stringi döndürür.
char	*ft_strtrim(char const *str, char const *set);// setteki karakterlerden başta ve sonda kaç tane varsa siler.
char	**ft_split(char const *str, char c);//stringi c karakterine göre ayırır.
char	*ft_itoa(int n);//int'i stringe çevirir
char	*ft_strmapi(char const *str, char (*f)(unsigned int, char));// stringe fonksiyon uygulayıp yeni bir string döndürür iteriden farkı return ve char olması
void	ft_striteri(char *s, void (*f)(unsigned int, char *));// stringe fonksiyon uygular mapiden farkı return olmaması ve void olması
void	ft_putchar_fd(char c, int fd);// karakteri dosyaya yazar
void	ft_putstr_fd(char *str, int fd);// stringi dosyaya yazar
void	ft_putendl_fd(char *str, int fd);// stringi dosyaya yazar ve alt satıra geçer
void	ft_putnbr_fd(int n, int fd);// sayıyı dosyaya yazar

typedef struct s_list //list yapısı
{
	void			*content; //listin içeriği(her türlü veri olabilir)
	struct s_list	*next; //listin bir sonraki elemanı
}					t_list; // listin veri tipi

t_list	*ft_lstnew(void *content);//yeni bir liste oluşturur
void	ft_lstadd_front(t_list **lst, t_list *new);//listeye baştan ekleme yapar
int		ft_lstsize(t_list *lst);//listenin uzunluğunu döndürür
t_list	*ft_lstlast(t_list *lst);//listenin son elemanını döndürür
void	ft_lstadd_back(t_list **lst, t_list *new);//listeye sondan ekleme yapar
void	ft_lstdelone(t_list *lst, void (*del)(void*));//listeden bir eleman siler
void	ft_lstclear(t_list **lst, void (*del)(void*));//listeyi siler
void	ft_lstiter(t_list *lst, void (*f)(void *));//listeye fonksiyon uygular
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));//listeye fonksiyon uygular ve yeni bir liste döndürür hata durumunda listeyi siler

#endif
