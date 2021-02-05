#pragma once
#include "../../Common/MathHelper.h"
#include "../../Common/d3dUtil.h"
using namespace DirectX;


class Entity
{
public:
	Entity();
	~Entity();

	void SetScale();
	void SetVelocity();
	void SetPosition();
	void SetRotation();
	void SetAcceleration();
	
	XMFLOAT3 EGetScale();
	XMFLOAT3 EGetVelocity();
	XMFLOAT3 EGetPosition();
	XMFLOAT3 EGetRotation();
	XMFLOAT3 EGetAcceleration();

private:

	XMFLOAT3 m_Scale;
	XMFLOAT3 m_Velocity;
	XMFLOAT3 m_Position;
	XMFLOAT3 m_Rotation;
	XMFLOAT3 m_Acceleration;



};

