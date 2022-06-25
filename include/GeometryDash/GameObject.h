#pragma once

#include "CCSprite.h"
#include "GJEffectManager.h"
#include "GDAPI_Macros.h"

struct GJColorSprite;

class GJSpriteColor {
public:
    CLASS_MEMBER(float, opacity, 0x10C);
};


class GameObject : public cocos2d::CCSprite // CCSpritePlus
{
public:
    uint32_t dwordF8;
    bool gapFC[12];
    uint32_t dword108;
    uint32_t dword1F4;
    uint32_t dword1F8;
    bool byte1FC;
    bool byte1FD;
    bool byte1FE;
    bool gap1FF[5];
    uint32_t dword204;
    uint32_t dword208;
    uint32_t dword20C;
    uint32_t dword210;
    bool byte214;
    uint32_t dword218;
    bool byte21C;
    bool byte21D;
    bool byte21E;
    bool byte21F;
    bool byte224;
    bool byte225;
    bool byte226;
    bool byte227;
    bool byte228;
    bool byte22d; 
    bool byte22e;
    bool byte22f;
    bool byte230;
    bool byteidk;
    bool byte232;
    bool inEditor_; // 0x231 
    bool groupDisabled;
    bool lockColorAsChild;
    uint32_t mainColorMode;
    uint32_t savedSecondaryColorMode;
    bool byte23C;
    bool byte23D;
    uint32_t dword240;
    uint32_t dword244;
    uint32_t dword248;
    uint32_t dword24C;
    uint32_t dword250;
    uint32_t dword2502;
    bool byte254;
    bool isFlipX;
    bool isFlipY;
    int ccpoint258;
    bool byte260;
    int ccpoint264;
    bool gap268[4];
    uint32_t orientatedBox;
    bool isOrientated;
    uint32_t dword274;
    bool byte278;
    cocos2d::CCAction *action; // 0x27C
    uint8_t _pad2[ 0x14 ];
    bool byte280;
    bool byte281;
    uint32_t dword284;
    uint32_t dword288;
    bool byte28C;
    bool isActive;
    bool isDisabled;
    uint32_t dword290;
    uint32_t dword294;
    bool byte298;
    bool byte299;
    bool byte29A;
    int ccpoint29C;
    bool gap2A0[4];
    bool byte2A4;
    int ccrect2A8;
    bool gap2AC[12];
    bool textureRectDirty;
    bool byte2B9;
    float fadeInPosOffset;
    int ccrect2C0;
    bool objectRectDirty;
    bool orientedRectDirty;
    bool byte2D2;
    bool byte2D3;
    bool byte2D4;
    bool canChangeCustomColor;
    bool byte2D6;
    uint32_t dword2D8;
    bool byte2DC;
    uint32_t dword2E0;
    bool byte2E4;
    bool byte2E5;
    bool byte2E6;
    bool mainBlend;
    bool secondaryBlend;
    bool hasCustomChildren;
    bool isAnimated;
    uint32_t colorSprite;
    bool ignoreScreenCheck;
    uint32_t radius;
    bool isRotated;
    float scaleModX;
    float scaleModY;
    uint32_t M_ID;
    uint32_t type;
    uint32_t sectionIdx;
    bool shouldSpawn;
    bool touchTriggered;
    cocos2d::CCPoint *startPos;
    uint32_t dword320;
    bool byte324;
    bool isSleeping;
    uint32_t dword328;
    uint32_t dword32C;
    uint32_t dword330;
    float startScaleX;
    float startScaleY;
    float startFlipX;
    float startFlipY;
    bool byte344;
    bool byte345;
    bool shouldHide;
    uint32_t spawnXPos;
    bool isInvisible;
    float enterAngle;
    float enterEffect;
    uint32_t dword358;
    float tintDuration;
    uint16_t word360;
    bool tintGround;
    uint32_t customColorIdx;
    uint32_t objectKey; // 0x368
    bool byte36C;
    bool byte36D;
    bool ignoreEnter;
    bool ignoreFade;
    bool byte370;
    bool byte371;
    bool isDetailColorObject;
    bool byte373;
    bool byte374;
    bool byte375;
    uint32_t objectZ;
    bool byte37C;
    bool colorOnTop;
    bool byte37E;
    uint32_t dword380;
    uint32_t dword384;
    bool byte388;
    uint32_t dword38C;
    uint32_t dword390;
    bool byte394;
    bool glowUseBGColor;
    bool byte396;
    bool byte397;
    float glowOpacityMod;
    bool upSlope;
    uint32_t slopeType;
    bool damaging;
    float slopeAngle;
    GJSpriteColor *mainColor;
    GJSpriteColor *secondaryColor;
    bool addedToBlend;
    uint32_t ZLayer;
    uint32_t customZLayer;
    uint32_t customObjectZ;
    uint32_t textBlockString;
    bool editorSelected;
    uint32_t dword3CC;
    bool isSpeedObject;
    bool wasSelected;
    bool isSelected;
    uint32_t editorSelectIdx;
    cocos2d::CCPoint *storedPosition;
    bool byte3E0;
    bool byte3E1;
    bool byte3E2;
    uint32_t dword3E4;
    uint32_t dword3E8;
    uint32_t dword3EC;
    uint32_t dword3F0;
    uint32_t dword3F4;
    uint32_t dword3F8;
    int ccpoint3FC;
    bool gap400[4];
    uint32_t groupID;
    uint16_t word408;
    uint32_t dword40C;
    uint16_t groupCount;
    uint32_t dword414;
    uint16_t word418;
    uint32_t dword41C;
    uint32_t dword420;
    uint32_t groupDisabledCount;
    bool byte428;
    bool useCustomContentSize;
    bool byte42A;
    bool byte42B;
    int customHitBox;
    bool gap430[4];
    cocos2d::CCPoint *lastPosition;
    bool gap438[4];
    bool didUpdateLastPosition;
    bool byte43D;
    bool byte43E;
    bool byte43F;
    uint32_t dword440;
    bool byte444;
    uint32_t dword448;
    bool byte44C;
    bool byte44D;
    bool byte44E;
    bool byte44F;
    bool byte450;
    bool byte451;
    uint32_t dword454;
    bool byte458;
    uint32_t dword45C;
    uint32_t dword460;
    uint32_t dword464;
    GJEffectManager *effectManager; // 0x464
    bool byte468;
    bool byte469;
    bool byte46A;
    bool byte46B;
    bool byte46C;
    uint32_t dword470;
    bool byte474;
    bool byte475;
    bool byte476;
    bool byte477;
    bool byte478;
    bool byte479;
    uint32_t dword47C;
    uint32_t dword480;
    uint32_t dword484;
    uint32_t dword488;
    uint32_t dword48C;

public:
    GameObject( );
    virtual ~GameObject();

    static GameObject* createWithKey( int key );
    static GameObject* createWithTexture( cocos2d::CCTexture2D* texture );
    static GameObject* createWithFrame( const char* frame );

    void setMyAction( cocos2d::CCAction* action );

    void resetObject();

    void addColorSprite( );
    void saveActiveColors( );

    virtual void __unknown0( );
    virtual void __unknown1( );
    virtual void __unknown2( );
    virtual void __unknown3( );

    virtual void customSetup( ); // 0x268
    virtual void setupCustomSprites( ); // 0x26C

    virtual void __unknown4( );
    virtual void __unknown5( );
    virtual void __unknown6( );
    virtual void __unknown7( );
    virtual void __unknown8( );
    virtual void __unknown9( );
    virtual void __unknown10( );
    virtual void __unknown11( );
    virtual void __unknown12( );
    virtual void __unknown13( );
    virtual void __unknown14( );
	

    virtual void setStartPos( cocos2d::CCPoint p ); // 0x29C

    // colors
    GJSpriteColor* getMainColor();
    GJSpriteColor* getSecondaryColor();
    int getMainColorMode();

    void updateMainColor();

    void updateMainColor(cocos2d::_ccColor3B const& color);
    void updateSecondaryColor(cocos2d::_ccColor3B const& color);
	void addMainSpriteToParent(bool);
	bool hasSecondaryColor();
    void addColorSpriteToParent(bool);

    void setOpacity(unsigned char opacity);
	void setVisible(bool);
    void updateMainOpacity();

    void activateObject();
    void deactivateObject(bool);
};