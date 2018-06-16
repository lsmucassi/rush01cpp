/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <lmucassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 13:21:04 by lmucassi          #+#    #+#             */
/*   Updated: 2018/06/16 16:25:34 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/MasterHeader.hpp"

int     main() {
	struct utsname sysinfo;
	uname(&sysinfo);
	//	cout << "login: "<< " whoami" << endl;
	std::cout << "System Name: "<< sysinfo.sysname<< std::endl;
	//	cout << "Host Name: "<<sysinfo.servname<<endl;
	std::cout << "Release(Kernel) Version: "<< sysinfo.release<< std::endl;
	std::cout << "Kernel Build Timestamp: "<< sysinfo.version<< std::endl;
	std::cout << "Machine Arch: "<< sysinfo.machine<< std::endl;
	//	cout << "Domain Name: "<<sysinfo.domainname<<endl;

	return 0;
}
