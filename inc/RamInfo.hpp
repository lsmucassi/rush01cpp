/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RamInfo.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <lmucassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 13:30:08 by lmucassi          #+#    #+#             */
/*   Updated: 2018/06/16 16:25:57 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAMINFO_H
# define RAMINFO_H

class   RamInfo {
    private:

    public:
        RamInfo();
        RamInfo(const RamInfo &src);
        virtual ~RamInfo();
};

#endif