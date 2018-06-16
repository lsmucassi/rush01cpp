/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DateTimeInfo.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <lmucassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 13:26:31 by lmucassi          #+#    #+#             */
/*   Updated: 2018/06/16 13:52:21 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATETIMEINFO_H
# define DATETIMEINFO_H

class   DateTimeInfo {
    private:
    
    public:
        DateTimeInfo();
        DateTimeInfo(const DateTimeInfo &src);
        virtual ~DateTimeInfo();    
};

#endif