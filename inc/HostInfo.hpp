/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HostInfo.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <lmucassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 13:27:01 by lmucassi          #+#    #+#             */
/*   Updated: 2018/06/16 13:53:32 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOSTINFO_H
# define HOSTINFO_H


class   HostInfo {
    private:

    public:
        HostInfo();
        HostInfo(const HostInfo &src);
        virtual ~HostInfo();
        
};

#endif