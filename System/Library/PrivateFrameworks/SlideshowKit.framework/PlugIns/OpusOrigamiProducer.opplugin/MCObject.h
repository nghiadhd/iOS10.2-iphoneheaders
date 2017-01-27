/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCObjectBase.h>

@class MCMontage, NSString;

@interface MCObject : MCObjectBase {

	MCMontage* mMontage;
	NSString* mObjectID;

}

@property (nonatomic,readonly) NSString * objectID; 
@property (nonatomic,readonly) MCMontage * montage; 
+(id)objectWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(id)_initWithObjectID:(id)arg1 ;
-(id)initSnapshot;
-(void)demolish;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(MCMontage *)montage;
-(id)initFromScratchWithMontage:(id)arg1 ;
-(void)dealloc;
-(id)snapshot;
-(NSString *)objectID;
-(id)imprint;
-(BOOL)isSnapshot;
@end

