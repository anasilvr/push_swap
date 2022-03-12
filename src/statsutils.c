/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   statsutils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:16:25 by anarodri          #+#    #+#             */
/*   Updated: 2022/02/17 11:54:17 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Statistical functions (mean, median, mode, standard deviation)

 Median: The median of a list of N values is found by sorting the input array
 in increasing order, and taking the middle value.
 Even number of elements: the average of two numbers in the middle.
 Odd number of elements: the middle element of the array after sorting.
*/

float	find_median(int *array, int n)
{
	float	median;

	median = 0;
	if (n % 2 == 0)
		median = (array[(n - 1) / 2] + array[n / 2]) / 2.0;
	else
		median = array[n / 2];
	return (median);
}
