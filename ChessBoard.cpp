#include "stdafx.h"
#include "ChessBoard.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

void CBoard::GetMoveInfo(int& next,int& prev,int& up,int& down)
{
	next = m_next;
	prev = m_prev;
	up = m_up;
	down = m_down;
}
void CBoard::SetMoveInfo(int next,int prev,int up,int down)
{
	m_next = next;
	m_prev = prev;
	m_up = up;
	m_down = down;
}
void CBoard::SetValue(int i)
{
	m_value=i;
}
int CBoard::GetValue()
{
	return m_value;
}
void CBoard::SetIndex(int i)
{
	m_index=i;
}
int CBoard::GetIndex()
{
	return m_index;
}
CRect CBoard::GetRect()
{
	return m_rect;
}
void CBoard::SetRect(CRect &inrect)
{
	m_rect = inrect;
}
void CBoard::SetColorType(COLOR_TYPE sq_type)
{
	m_sq_type = sq_type;
}
COLOR_TYPE CBoard::GetColorType()
{
	return m_sq_type;
}
void CBoard::SetPieceType(PIECE_TYPE piece_type)
{
	m_piece_type = piece_type;
}
PIECE_TYPE CBoard::GetPieceType()
{
	return m_piece_type;
}
void CBoard::SetPieceColor(COLOR_TYPE piece_color)
{
	m_piece_color = piece_color;
}
COLOR_TYPE CBoard::GetPieceColor()
{
	return m_piece_color;
}
void CBoard::SetPieceId(int piece_id)
{
	m_pieceid = piece_id;
}
int CBoard::GetPieceId()
{
	return m_pieceid;
}
void CBoard::SetPieceData(int piece_id,COLOR_TYPE piece_color,PIECE_TYPE piece_type, STATE piece_state)
{
	m_piece_color = piece_color;
	m_pieceid = piece_id;
	m_piece_type = piece_type;
	m_piece_state = piece_state;
}
void CBoard::GetPieceData(int &piece_id,COLOR_TYPE &piece_color,PIECE_TYPE &piece_type, STATE& piece_state)
{
	piece_color = m_piece_color;
	piece_id = m_pieceid;
	piece_type = m_piece_type;
	piece_state = m_piece_state;
 
}