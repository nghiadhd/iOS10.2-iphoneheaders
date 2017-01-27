/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/KonaClip.h>

@interface AudioClip : KonaClip {

	BOOL startOffsetValidated;
	BOOL cachedFades;
	int cachedFadeIn;
	int cachedFadeOut;

}

@property (assign,nonatomic) int cachedFadeIn; 
@property (assign,nonatomic) int cachedFadeOut; 
@property (assign,nonatomic) BOOL cachedFades; 
@property (assign,nonatomic) int audioType; 
@property (assign,nonatomic) BOOL startOffsetValidated; 
+(BOOL)audioEnabledByDefault;
+(int)defaultAudioTypeForClipType:(int)arg1 ;
+(int)defaultClipTypeForAudioType:(int)arg1 ;
+(id)backgroundClip;
+(id)soundEffectClip;
-(id)init;
-(void)setDuration:(int)arg1 ;
-(int)startOffset;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setStartOffset:(int)arg1 ;
-(int)clipType;
-(void)setAudioFadeOutDuration:(int)arg1 ;
-(void)setAudioFadeInDuration:(int)arg1 ;
-(int)audioFadeInDuration;
-(int)audioFadeOutDuration;
-(BOOL)hasAudioCharacteristic;
-(BOOL)startOffsetValidated;
-(id)themeID;
-(void)setThemeID:(id)arg1 ;
-(void)setStartOffsetValidated:(BOOL)arg1 ;
-(void)setAudioType:(int)arg1 ;
-(int)audioType;
-(void)setContentsFromPlist:(id)arg1 inProject:(id)arg2 ;
-(void)setCachedFades:(BOOL)arg1 ;
-(BOOL)cachedFades;
-(void)setCachedFadeIn:(int)arg1 ;
-(void)setCachedFadeOut:(int)arg1 ;
-(void)validateFades;
-(int)cachedFadeIn;
-(int)cachedFadeOut;
-(id)asBackgroundAudioClip;
-(id)asForegroundAudioClip;
-(BOOL)isBackgroundAudio;
@end

