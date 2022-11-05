# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/08 14:49:52 by aminoru-          #+#    #+#              #
#    Updated: 2022/10/20 18:43:01 by aminoru-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBFTPRINTHPATH = ./lib/printf/
LIBFTPRINTH = ./lib/printf/libftprintf.a

CC = gcc
CFLAG = -Wall -Werror -Wextra
INCS = -I ./include/
SRCS = 	./src/push_swap.c \
		./src/error/error.c \
		./src/func/ft_pa.c \
		./src/func/ft_pb.c \
		./src/func/ft_ra.c \
		./src/func/ft_rb.c \
		./src/func/ft_rr.c \
		./src/func/ft_rra.c \
		./src/func/ft_rrb.c \
		./src/func/ft_rrr.c \
		./src/func/ft_sa.c \
		./src/func/ft_sb.c \
		./src/func/ft_ss.c \
		./src/lst_func/ft_del.c \
		./src/lst_func/ft_lstclear_int.c \
		./src/lst_func/ft_lstdelone_int.c \
		./src/lst_func/ft_lst_del_next.c \
		./src/lst_func/ft_lstpush.c \
		./src/lst_func/ft_lstrotate.c \
		./src/lst_func/ft_lstrrotate.c \
		./src/lst_func/ft_lstswap.c \
		./src/lst_func/ft_print_list.c \
		./src/lst_func/ft_lstnew_int.c  \
		./src/lst_func/long_atoi.c \
		./src/lst_func/make_list.c \
		./src/sort/insertion/insertion_sort.c \
		./src/sort/insertion/push_sort.c \
		./src/sort/insertion/rrotate_sort.c \
		./src/sort/insertion/rotate_sort.c \
		./src/sort/insertion/swap_sort.c \
		./src/sort/radix/radix_sort.c \
		./src/sort/radix/radix_first.c \
		./src/sort/radix/radix_second.c \
		./src/sort/radix/r_fm.c \
		./src/sort/radix/r_sm.c \
		./src/sort/radix/select_ref_count.c \
		./src/sort/radix/find_dir.c \
		./src/sort/radix/find_ref.c \
		./src/sort/radix/select_dir.c \
		./src/sort/radix/select_range.c \
		./src/sort/radix/insert_range.c  \
		./src/sort/radix/tag_sort.c \
		./src/sort/radix/tag_ref.c \
		./src/sort/radix/tag_min_ref.c \
		./src/sort/radix/tag_set.c \
		./src/sort/tools/ft_sort.c \
		./src/sort/select_sort_type.c \
		./src/valid/valid_all.c \
		./src/valid/valid_duplicate.c \
		./src/valid/valid_is_int.c \
		./src/valid/valid_max_limit.c

OBJS = ${SRCS:.c=.o}

R1A = 3 2 1

R5A = 1 5 3 4 2

R100A = 68 79 18 4 20 51 29 69 75 27 26 32 64 78 17 73 25 46 56 41 85 36 13 8 42 77 44 22 65 33 2 96 60 1 48 74 67 47 16 23 62 89 35 49 34 9 58 43 87 37 21 31 90 88 28 83 66 40 30 76 50 81 52 71 97 93 92 82 3 24 14 80 6 45 86 39 38 19 100 72 54 7 15 53 59 5 94 91 95 11 55 70 12 57 98 63 61 10 99 84

R500A = 298 291 124 11 448 146 411 382 334 45 477 415 224 219 93 116 347 81 336 46 154 138 387 297 418 462 489 18 389 14 201 320 287 286 352 383 427 275 421 49 455 85 163 269 356 439 122 469 203 328 173 259 185 351 177 150 290 33 129 284 186 226 225 244 211 471 114 103 105 72 20 380 367 419 126 479 476 205 171 179 24 264 108 280 1 190 160 241 187 399 444 467 95 278 44 86 149 10 161 228 395 329 300 398 461 240 304 340 119 456 401 176 37 348 466 199 142 66 139 137 252 25 289 30 345 494 76 413 333 151 167 249 332 80 216 350 194 198 416 136 482 96 39 322 156 392 143 232 148 369 391 302 152 75 432 253 295 12 23 88 141 5 17 16 266 4 288 192 42 260 172 283 82 337 311 102 34 292 168 227 189 213 257 442 412 230 342 376 325 464 56 113 267 195 343 13 212 69 79 390 453 55 317 237 197 282 229 403 84 61 118 99 100 440 338 166 157 366 242 360 459 374 109 384 335 178 368 115 324 250 191 472 375 449 170 433 409 258 262 430 123 341 71 362 359 159 175 221 162 248 370 8 110 28 58 331 180 38 63 276 406 457 182 434 326 446 346 77 184 208 379 307 271 424 349 353 155 363 357 261 19 468 6 452 394 2 35 223 393 299 431 378 131 420 209 254 222 90 385 97 188 32 164 454 281 436 134 128 247 231 83 371 339 51 200 296 59 310 132 318 483 272 294 181 9 425 491 405 316 50 475 429 121 410 474 107 478 279 443 238 255 408 60 330 104 492 207 52 388 145 235 315 488 463 309 285 57 73 435 308 92 243 36 133 303 98 321 215 7 470 381 496 206 495 217 500 204 498 78 218 256 89 158 268 54 210 497 314 53 251 306 234 183 94 147 499 125 233 26 313 48 397 404 400 65 106 426 27 417 47 265 64 447 220 484 451 112 29 437 196 480 165 481 373 293 301 70 473 277 422 355 153 140 214 490 377 239 354 344 246 236 438 174 62 445 323 43 458 402 68 74 91 305 428 372 407 312 193 117 270 101 414 144 67 245 41 202 273 361 487 22 31 450 21 358 486 386 87 460 365 319 130 493 40 327 127 274 263 465 3 111 423 441 15 169 396 120 364 135 485

all: ${NAME}

${NAME}: ${OBJS} 
			make -C $(LIBFTPRINTHPATH)
			${CC} -o ${NAME} ${CFLAG} ${OBJS} ${LIBFTPRINTH}

.c.o:
			${CC} ${CFLAG} ${INCS} -c $< -o ${<:.c=.o}

t:
			make -C ./test
			clear
			./test/run_test

r1all:
	./push_swap ${R1A} | ./checker_OS ${R1A}
	./push_swap ${R1A} | wc -l

r5all:
	./push_swap ${R5A} | ./checker_OS ${R5A}
	./push_swap ${R5A} | wc -l

r100:
	./push_swap ${R100A} | ./checker_OS ${R100A}
	./push_swap ${R100A} | wc -l

r500:
	./push_swap ${R500A} | ./checker_OS ${R500A}
	./push_swap ${R500A} | wc -l


clean:
			make clean -C ./lib/printf
			rm -f ${OBJS}

fclean: clean
			make fclean -C ./lib/printf
			rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
