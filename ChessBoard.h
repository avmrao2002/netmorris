#if !defined(CHESS_BOARD_H)
#define CHESS_BOARD_H

class CBoard
{
private:	 
	int m_index;
	int m_value;
	int m_next;
	int m_up;
	int m_down;
	int m_prev;
	COLOR_TYPE m_sq_type;
	CRect m_rect;
	PIECE_TYPE m_piece_type;
	COLOR_TYPE m_piece_color;
	int m_pieceid;
	STATE m_piece_state;
public:
	void GetMoveInfo(int&,int&,int&,int&);
	void SetMoveInfo(int,int,int,int);
	CRect GetRect();
	void SetIndex(int i);
	int GetIndex();
	void SetValue(int i);
	int GetValue();
	 
	void SetRect(CRect &inrect);
	 
	void SetColorType(COLOR_TYPE sq_type);
	 
	COLOR_TYPE GetColorType();
	 
	void SetPieceType(PIECE_TYPE piece_type);
	 
	PIECE_TYPE GetPieceType();
	 
	void SetPieceColor(COLOR_TYPE piece_color);
	 
	COLOR_TYPE GetPieceColor();
	 
	void SetPieceId(int piece_id);
	 
	int GetPieceId();
	 
	void SetPieceData(int piece_id,COLOR_TYPE piece_color,PIECE_TYPE piece_type, STATE piece_state);
	 
	void GetPieceData(int &piece_id,COLOR_TYPE &piece_color,PIECE_TYPE &piece_type,STATE& piece_state);

	STATE GetPieceState()
	{
		return m_piece_state;
	}
	void SetPieceState(STATE state)
	{
		m_piece_state = state;
	}
	 
protected:
};
#endif