/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Messages/iMessageEffects/CKHappyBirthdayEffect.bundle/CKHappyBirthdayEffect
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/CALayer.h>

@class CALayer;

@interface CKHappyBirthdayEffectBalloonLayer : CALayer {

	CALayer* _balloonLayer;
	CALayer* _attachmentLayer;
	CALayer* _stringLayer;

}

@property (nonatomic,retain) CALayer * balloonLayer;                 //@synthesize balloonLayer=_balloonLayer - In the implementation block
@property (nonatomic,retain) CALayer * attachmentLayer;              //@synthesize attachmentLayer=_attachmentLayer - In the implementation block
@property (nonatomic,retain) CALayer * stringLayer;                  //@synthesize stringLayer=_stringLayer - In the implementation block
-(void)setAttachmentLayer:(CALayer *)arg1 ;
-(CALayer *)attachmentLayer;
-(void)setBalloonLayer:(CALayer *)arg1 ;
-(void)setupStringLayerWithStringColorIndex:(unsigned long long)arg1 ;
-(void)setupBaloonLayerWithColorIndex:(unsigned long long)arg1 ;
-(void)setupAttachmentLayerWithStringColorIndex:(unsigned long long)arg1 ;
-(CALayer *)balloonLayer;
-(CALayer *)stringLayer;
-(void)setStringLayer:(CALayer *)arg1 ;
-(id)init;
-(id)assetWithName:(id)arg1 ;
@end

