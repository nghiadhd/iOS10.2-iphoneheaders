/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <Memories/MovieClip.h>
#import <libobjc.A.dylib/CompoundClipInformation.h>

@class PVEffect, NSMutableDictionary, NSArray, NSString;

@interface MultiUpClip : MovieClip <CompoundClipInformation> {

	int _type;
	PVEffect* _multiUpEffect;
	NSMutableDictionary* _multiUpEffectSettings;
	NSArray* _containedClips;

}

@property (assign,nonatomic) int type;                                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSArray * containedClips;                                 //@synthesize containedClips=_containedClips - In the implementation block
@property (nonatomic,readonly) PVEffect * multiUpEffect;                               //@synthesize multiUpEffect=_multiUpEffect - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * multiUpEffectSettings;              //@synthesize multiUpEffectSettings=_multiUpEffectSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDuration:(int)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStartOffset:(int)arg1 ;
-(int)maxDuration;
-(NSArray *)containedClips;
-(BOOL)isMultiUp;
-(void)setContainedClips:(NSArray *)arg1 ;
-(void)setMultiUpEffectSettings:(NSMutableDictionary *)arg1 ;
-(void)validateEffectRange:(SCD_Struct_Mi11)arg1 inProject:(id)arg2 ;
-(id)plistRepresentationFromProject:(id)arg1 ;
-(BOOL)expandsEditList;
-(void)setContentsFromPlist:(id)arg1 inProject:(id)arg2 ;
-(PVEffect *)multiUpEffect;
-(id)initWithClip:(id)arg1 ;
-(NSMutableDictionary *)multiUpEffectSettings;
-(id)movie;
@end

