/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface SKReachConstraints : NSObject <NSCoding> {

	double _lowerAngleLimit;
	double _upperAngleLimit;

}

@property (assign,nonatomic) double lowerAngleLimit;              //@synthesize lowerAngleLimit=_lowerAngleLimit - In the implementation block
@property (assign,nonatomic) double upperAngleLimit;              //@synthesize upperAngleLimit=_upperAngleLimit - In the implementation block
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLowerAngleLimit:(double)arg1 ;
-(void)setUpperAngleLimit:(double)arg1 ;
-(double)lowerAngleLimit;
-(double)upperAngleLimit;
-(id)initWithLowerAngleLimit:(double)arg1 upperAngleLimit:(double)arg2 ;
@end

