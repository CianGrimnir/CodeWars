# https://www.codewars.com/kata/57f625992f4d53c24200070e


def bingo(ticket,win):
    mini_win=0
    for subTicket in ticket:
	for i in subTicket[0]:
	    if ord(i) == subTicket[1]:
		mini_win+=1
		break
    if mini_win >= win:
	return 'Winner!'
    else:
	return 'Loser!'
