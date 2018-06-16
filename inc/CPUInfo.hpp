/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPUInfo.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <lmucassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 13:25:20 by lmucassi          #+#    #+#             */
/*   Updated: 2018/06/16 13:51:09 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPUINFO_H
# define CPUINFO_H

class   CpuInfo {
    private:

    public:
        CpuInfo();
        CpuInfo(const CpuInfo &src);
        virtual ~CpuInfo();    
};

#endif