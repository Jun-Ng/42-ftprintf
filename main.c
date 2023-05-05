/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junng <junng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 19:32:42 by junng             #+#    #+#             */
/*   Updated: 2023/05/06 01:36:13 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_printf(const char *s, ...);


/*
	• Don’t implement the buffer management of the original printf()
	>	wtf does this mean
	
	• Your function has to handle the following conversions: cspdiuxX%

	Format tags prototype is %[flags][width][.precision][length]specifier

	Flags
	1.	-
	2.	+
	3.	(space)
	4.	#
	5,	0

	Format
	1.	Plain characters
	2.	\ Character escape sequences
	3.	% Format Specification

	Flow
	1.	How are arguments treated
		1.	%c, %b, %s
			>	Treated as strings
		2.	A leading plus or minus sign is allowed
	2.	Each format specification is introduced by ("%").
		The remainder of the format specification includes, in the following order.
		1.	#
			>	"#" specifies that the value should be printed in an "alternate form"
			>	For b, c, d, s, u formats, this option has no effect.
			>	For x(X) format, a non-zero result has the string 0x(0X) prepended to it.
		2.	-
			>	A minus sign which specifies LEFT ADJUSTMENT of the output in the indicated field
		3.	+
			>	a '+' character should be placed b4 the number when using signed formats (positive int?)
		4.	(space)
			>	a (space), a blank should be left before a positive number for a signed format.
				a '+' overrides a space if both are used
		5.	0
			>	0 should be used instead of (space) when padding,
				A '-' overrides a '0' if both are used
	3.	Field Width
		1.	An optional digit string specifying a field width,
			if the output string has fewer bytes than the field width it will be blank-padded
	4.	Precision
		1.	An optional period ".", followed by an optional digit string giving a precision which
			specifies the number of digits to appear after the decimal point, for e & f formats,
			or the maximum number of bytes from a string; 
		2.	if the digit string is missing, the precision is treated as 0
	5.	Format
		1.	%(one of diouxXfFeEgGaAcsb)
		2.	The floating point specifiers (fFeEgGaA)
			> may be prefixed by an L to request that additional precision be used, if available

	Okay you're implementing
	1.	#
		>	"#" specifies that the value should be printed in an "alternate form"
		>	For b, c, d, s, u formats, this option has no effect.
		>	For x(X) format, a non-zero result has the string 0x(0X) prepended to it.
	2.	(space)
		>	a (space), a blank should be left before a positive number for a signed format.
			a '+' overrides a space if both are used
	3.	+
		>	a '+' character should be placed b4 the number when using signed formats (positive int?)
*/
#include <unistd.h>
int	main(void)
{
	int	x;

	x = 0;
	// (void)input, (void)s, (void)c, (void)d;
	// ft_printf("|%%|%c|%s|", 'g', 'c');
	printf(" %c %p|\n", 's', &x);
	ft_printf("%c %p|\n", 's', -100);
	return (0);
}
