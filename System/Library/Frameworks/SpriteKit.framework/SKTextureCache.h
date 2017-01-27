/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpriteKit/SpriteKit-Structs.h>
@interface SKTextureCache : NSObject {

	long long filteringMode;
	CGSize size;
	CGSize pixelSize;
	BOOL hasAlpha;
	BOOL isPOT;
	char* pixelData;
	int state;
	opaque_pthread_mutex_t lock;
	shared_ptr<jet_texture>* _backingTexture;
	unsigned _textureFormat;
	int wrapMode;

}

@property (assign,nonatomic) unsigned textureFormat;                                     //@synthesize textureFormat=_textureFormat - In the implementation block
@property (assign,nonatomic) shared_ptr<jet_texture>* backingTexture;                    //@synthesize backingTexture=_backingTexture - In the implementation block
@property (assign,nonatomic) long long filteringMode; 
@property (assign,nonatomic) int wrapMode; 
@property (assign,nonatomic) CGSize size; 
@property (assign,nonatomic) CGSize pixelSize; 
@property (assign,nonatomic) BOOL hasAlpha; 
@property (assign,nonatomic) BOOL isPOT; 
@property (assign,nonatomic) char* pixelData; 
@property (assign,nonatomic) int state; 
@property (getter=getLock,nonatomic,readonly) opaque_pthread_mutex_t* lock; 
-(id)init;
-(CGSize)size;
-(void)dealloc;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)_reset;
-(void)setSize:(CGSize)arg1 ;
-(void)setHasAlpha:(BOOL)arg1 ;
-(BOOL)hasAlpha;
-(opaque_pthread_mutex_t*)getLock;
-(BOOL)isPOT;
-(void)setIsPOT:(BOOL)arg1 ;
-(char*)pixelData;
-(void)setPixelData:(char*)arg1 ;
-(void)setPixelSize:(CGSize)arg1 ;
-(void)setFilteringMode:(long long)arg1 ;
-(int)wrapMode;
-(unsigned)textureFormat;
-(void)setTextureFormat:(unsigned)arg1 ;
-(shared_ptr<jet_texture>*)backingTexture;
-(void)setBackingTexture:(shared_ptr<jet_texture>*)arg1 ;
-(long long)filteringMode;
-(void)setWrapMode:(int)arg1 ;
-(CGSize)pixelSize;
@end

