/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OSInfo.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <lmucassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 13:29:27 by lmucassi          #+#    #+#             */
/*   Updated: 2018/06/16 13:49:59 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OSINFO_H
# define OSINFO_H

class   OSInfo {
    private:
    
    public:
        OSInfo();
        OSInfo(const OSInfo &src);
        virtual ~OSInfo();
};

#endif