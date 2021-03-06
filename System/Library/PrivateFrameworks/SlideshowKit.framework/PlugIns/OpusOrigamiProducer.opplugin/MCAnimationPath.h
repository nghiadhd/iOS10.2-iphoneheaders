/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCObjectLight.h>

@class NSString;

@interface MCAnimationPath : MCObjectLight {

	BOOL mIsTriggered;
	BOOL mIsSnapshot;
	NSString* mKey;

}

@property (copy) NSString * key; 
@property (assign,nonatomic) BOOL isTriggered; 
+(id)animationPathWithKey:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
-(BOOL)isTriggered;
-(void)demolish;
-(void)setIsTriggered:(BOOL)arg1 ;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(id)imprint;
-(BOOL)isSnapshot;
@end

