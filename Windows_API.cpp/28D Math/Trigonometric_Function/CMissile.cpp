#include "pch.h"
#include "CMissile.h"
#include "CTimeMgr.h"

CMissile::CMissile()
	: m_fTheta(PI / 4.f)
{
}

CMissile::~CMissile()
{
}

void CMissile::update()
{
	Vec2 vPos = GetPos();

	vPos.y -= 600.f * sinf(m_fTheta) * FDT;
	vPos.x += 600.f * cosf(m_fTheta) * FDT;

	SetPos(vPos);
}

void CMissile::render(HDC _dc)
{
	Vec2 vPos = GetPos();
	Vec2 vScale = GetScale();
	Ellipse(_dc, (int)(vPos.x - vScale.x / 2.f), (int)(vPos.y - vScale.y / 2.f)
		         , (int)(vPos.x + vScale.x / 2.f), (int)(vPos.y + vScale.y / 2.f));
}
