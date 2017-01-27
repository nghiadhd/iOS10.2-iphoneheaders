/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCAction.h>

@class NSString;

@interface MCActionTrigger : MCAction {

	NSString* _actionKey;

}

@property (copy) NSString * actionKey;              //@synthesize actionKey=_actionKey - In the implementation block
+(id)actionTriggerForTargetPlugObjectID:(id)arg1 withActionKey:(id)arg2 ;
-(id)initWithImprint:(id)arg1 ;
-(void)demolish;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)description;
-(void)setActionKey:(NSString *)arg1 ;
-(NSString *)actionKey;
-(id)imprint;
@end
