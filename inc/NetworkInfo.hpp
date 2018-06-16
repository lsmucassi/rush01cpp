/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NetworkInfo.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <lmucassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 13:28:53 by lmucassi          #+#    #+#             */
/*   Updated: 2018/06/16 13:43:41 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NETWORKINFO_H
# define NETWORKINFO_H

class   NetworkInfo {
    private:
    
    public:
        NetworkInfo();
        NetworkInfo(const NetworkInfo &src);
        virtual ~NetworkInfo();
};

#endif