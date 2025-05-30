#pragma once
#include "GraphicsUtil.h"  // ����͸�����ƺ���
#include "Atlas.h"         // ���� Atlas ��

class Animation {
public:
    Animation(Atlas* atlas, int interval);
    ~Animation() = default;

    void Play(int x, int y, int delta);

private:
    int timer = 0;        // ������ʱ��
    int idx_frame = 0;    // ��ǰ֡����
    int interval_ms = 0;  // ֡��������룩
    Atlas* anim_atlas;    // ����ͼ��
};