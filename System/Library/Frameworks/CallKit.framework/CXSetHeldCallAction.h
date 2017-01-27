/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXCallAction.h>

@interface CXSetHeldCallAction : CXCallAction {

	BOOL _onHold;

}

@property (assign,getter=isOnHold,nonatomic) BOOL onHold;              //@synthesize onHold=_onHold - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)customDescription;
-(BOOL)isOnHold;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(void)setOnHold:(BOOL)arg1 ;
-(id)initWithCallUUID:(id)arg1 onHold:(BOOL)arg2 ;
@end

