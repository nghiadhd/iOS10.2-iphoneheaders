/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PVHeliumEffect.h>

@interface PVWipeTransition : PVHeliumEffect {

	int _transitionDirection;

}

@property (assign,nonatomic) int transitionDirection;              //@synthesize transitionDirection=_transitionDirection - In the implementation block
+(void)registerEffectWithID:(id)arg1 displayName:(id)arg2 ;
-(int)transitionDirection;
-(void)setTransitionDirection:(int)arg1 ;
-(HGRef<HGNode>*)hgNodeForTime:(SCD_Struct_PV14)arg1 inputs:(const PVInputHGNodeMap<unsigned int>*)arg2 renderer:(const HGRef<HGRenderer>*)arg3 renderContext:(HGRef<PVRenderContext>*)arg4 ;
@end

