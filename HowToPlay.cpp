// HowToPlay.cpp : implementation file
//

#include "stdafx.h"
#include "NetChess.h"
#include "HowToPlay.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CHowToPlay dialog


CHowToPlay::CHowToPlay(CWnd* pParent /*=NULL*/)
	: CDialog(CHowToPlay::IDD, pParent)
{
	//{{AFX_DATA_INIT(CHowToPlay)
	m_edit_string = _T("");
	//}}AFX_DATA_INIT
}


void CHowToPlay::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CHowToPlay)
	DDX_Text(pDX, IDC_EDIT_STRING, m_edit_string);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CHowToPlay, CDialog)
	//{{AFX_MSG_MAP(CHowToPlay)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CHowToPlay message handlers

BOOL CHowToPlay::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
		
m_edit_string = "\t\tHOW TO PLAY Network Morris\r\n\r\nNetwork Morris is a Morris game which can be played between two " 
"players on the same board or over LAN, intranet using TCP/IP communication. This game is commonly called as Nine Men's Morris.\r\n\r\n"
"Know the game and board setup: The board has three 'concentric' squares linked at the mid points of their sides. "
"This provides 24 intersecting points arranged in16 lines of three. The board is filled with green holes at intersection points "
"which are valid positions on the board. On top right side, 9 black side balls(pink) are filled. On the right bottom side, "
"9 white side balls (white) are filled. You can customize the color of ball of your choice. "
"On the status bar, first box shows status message, second box shows current side (WHITE or "
"BLACK) and the fourth box show the Player's turn. Player's turn will be reflected for each "
"move. If you want to play with White on the network, then start the game as Server (enter "
"valid port number in the Server dialog box and inform your systems IP address and port "
"number entered in the server dialog box to your opponent for connection. Both computers "
"should be in same network. Your opponent should connect to the server (Know your opponent's "
"IP address and port number and enter these details in the connection dialog box). If the "
"play is started on the same board then connection to server is not required (Click on "
"disconnect until \"not connected to Network\" if you have already enter server details or "
"connected to server). Whenever there is a move, a message or any other action, an icon will "
"be toggled in the system tray. You can also hide the game (View->Hide). On clicking on icon "
"in system tray, the hidden game will be activated. For each player's turn drag the ball from "
"right side to valid position on the board. If you make a mill from the current move, then "
"you have the option to remove your opponent's ball from board before clicking on \"Send\".\r\n\r\n"
"Object of the game:\r\n"
"First player to reduce their opponent to two balls wins.\r\n\r\n"
"For each turn of the player, move one ball to valid position on the board from right side"
" and try to form three balls in a line (also called mill). Once all the balls for player's"
" side are moved on to the board, slide the ball to valid position to make mill. Whenever a "
"mill is formed, player has the option to remove opponent's ball from the board and place it "
"in his side (drag the ball to right side to remove the ball from the board). As soon as one "
"player is left with only two balls then opponent win's the game.\r\n\r\n"
"For each turn of the player, move the ball from right side to valid position or slid the ball"
" to consecutive valid position. If you make the mill (consecutive three balls) , you have "
"the option to remove your opponents ball from the board to your side (Drag your opponent's "
"ball to your side on the right side of the board). After the moves are done, click on \"Send\". "
"Moves will be reflected on both the boards. Players turn will be displayed on the status bar.\r\n\r\n"
"Other features are:-\r\n"
"\"File->New\" A new game will be started by cleaning the running game (No confirmation is "
"asked from your opponent). A message will be notified to your opponent.\r\n"
"\"Edit->Option\" can be used to change the color of the balls.\r\n"
"\"Edit->Properties\" will display the current connection status of the game(Server or client)."
"\"Edit->Undo\" Undo the last one or two move(s).Undo can be done before submitting the move. Once the move is submitted, you can not undo the move.\r\n"
"\"Tools->SendMessage\" can be used to send instant message to the other player.\r\n"
"\"Tools->Disconnect\" disconnects from the network game.\r\n"
"\"View->Hide\" will hide the current board and an icon will be placed in the system tray. \r\n To activate the game again, click on Network Morris icon in the system tray, the hidden board will be activated\r\n"
"This software is aimed at for playing Network Morris game between two players over network or on the same board.\r\n\r\n"
"Enjoy the free game!!!\r\n";
UpdateData(FALSE);
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}
