#pragma once
#include "../../Common/MathHelper.h"
#include "../../Common/d3dUtil.h"
using namespace DirectX;


// class Entity
// {
// public:
// 	Entity();
// 	~Entity();

// 	void SetScale(); 
// 	void SetVelocity();
// 	void SetPosition();
// 	void SetRotation();
// 	void SetAcceleration();
	
// 	XMFLOAT3 EGetScale();
// 	XMFLOAT3 EGetVelocity();
// 	XMFLOAT3 EGetPosition();
// 	XMFLOAT3 EGetRotation();
// 	XMFLOAT3 EGetAcceleration();

// private:

// 	XMFLOAT3 m_Scale;
// 	XMFLOAT3 m_Velocity;
// 	XMFLOAT3 m_Position;
// 	XMFLOAT3 m_Rotation;
// 	XMFLOAT3 m_Acceleration;



// };


struct RenderItem
{


	XMFLOAT4X4 World = MathHelper::Identity4x4();
	XMFLOAT4X4 TexTransform = MathHelper::Identity4x4();
	int NumFramesDirty = gNumFrameResources;
	UINT ObjCBIndex = -1;
	Material* Mat = nullptr;
	MeshGeometry* Geo = nullptr;
	D3D12_PRIMITIVE_TOPOLOGY PrimitiveType = D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST;
	UINT IndexCount = 0;
	UINT StartIndexLocation = 0;
	int BaseVertexLocation = 0;
	
	
	XMMATRIX scale;
	XMMATRIX translation;

	// constructor
	RenderItem() = default;
	RenderItem(float scaleX, float scaleY, float scaleZ, float sizeX, float sizeY, float sizeZ)
	{
		// scale = XMMatrixScaling(0.1f, 1.0f, 0.1f);
		// translation = XMMatrixTranslation(0.0f, 0.1f, -10.0f);
		// XMStoreFloat4x4(&World, scale * translation);
	};


	void foward()
	{
		
		// XMVECTOR v2 = XMVectorSet(1.0, 1.0, 1.0, 1.0);
		// XMFLOAT4 v2F;
		// XMStoreFloat4(&v2F, v2);	

		// World = XMLoadFloat4(&v2F);
	}
	
};