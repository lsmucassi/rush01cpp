# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmucassi <lmucassi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/10 11:45:14 by lmucassi          #+#    #+#              #
#    Updated: 2018/06/16 13:19:35 by lmucassi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ft_gkrellm

COMP	=	clang++

FLAG	=	-Wall -Wextra -Werror

EXT_LIB	=	-lcurses

SRC_DIR	=	./src/

SRC		=	main.cpp

CLASS	=	OSInfo.cpp\
			CPUInfo.cpp\
			NetworkInfo.cpp\
			HostInfo.cpp\
			RamInfo.cpp\
			DateTimeInfo.cpp

$(NAME): 
	@echo	"\033[32mCreating \t: \tGKRELLM PROJECT \033[00m"
	@echo	"\033[32mAUTHORS \t: \tBDLOKO & LMUCASSI \033[00m"
	@echo	"\033[32mPROJECT \t: \tRUSH \033[00m"
	@echo	"\033[32mRUSH NO \t: \t01  \033[00m"
	@echo	"\033[32mPISCINE \t: \tCPP BOOTCAMP \033[00m"
	@echo	"\033[32mSCHOOL	\t: \tWETHINKCODE_ [JHB] \033[00m"
	@$(COMP) $(FLAG)  ./src/* -o $(NAME) $(EXT_LIB)
	@echo	"\033[32mFinishing Compilation \033[00m"
	@echo	"\033[32mDONE ! \033[00m"

clean:
	@echo	"\033[32mCleaning Project \033[00m"
	@rm	 $(NAME)
	@echo	"\033[32mDONE ! \033[00m"

fclean: clean

re:	fclean

.PHONY: re clean fclean
