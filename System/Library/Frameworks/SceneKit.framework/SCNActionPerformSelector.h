/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNAction.h>

@interface SCNActionPerformSelector : SCNAction {

	SEL _selector;
	id _target;

}
+(BOOL)supportsSecureCoding;
+(id)perfromSelector:(SEL)arg1 onTarget:(id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)reversedAction;
-(void)updateWithTarget:(id)arg1 forTime:(double)arg2 ;
-(BOOL)isCustom;
@end

