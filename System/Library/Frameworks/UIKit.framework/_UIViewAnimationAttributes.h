/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _UIViewAnimationAttributes : NSObject <NSSecureCoding> {

	double _duration;
	double _delay;
	unsigned long long _options;
	BOOL _hasSpringAttributes;
	double _springDamping;
	double _springVelocity;
	double _springMass;
	double _springStiffness;
	long long _curve;

}

@property (getter=_duration,nonatomic,readonly) double duration;                                  //@synthesize duration=_duration - In the implementation block
@property (getter=_delay,nonatomic,readonly) double delay;                                        //@synthesize delay=_delay - In the implementation block
@property (getter=_curve,nonatomic,readonly) long long curve;                                     //@synthesize curve=_curve - In the implementation block
@property (getter=_hasSpringAttributes,nonatomic,readonly) BOOL hasSpringAttributes;              //@synthesize hasSpringAttributes=_hasSpringAttributes - In the implementation block
@property (getter=_springDamping,nonatomic,readonly) double springDamping;                        //@synthesize springDamping=_springDamping - In the implementation block
@property (getter=_springVelocity,nonatomic,readonly) double springVelocity;                      //@synthesize springVelocity=_springVelocity - In the implementation block
@property (getter=_springMass,nonatomic,readonly) double springMass;                              //@synthesize springMass=_springMass - In the implementation block
@property (getter=_springStiffness,nonatomic,readonly) double springStiffness;                    //@synthesize springStiffness=_springStiffness - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)_duration;
-(double)_delay;
-(long long)_curve;
-(long long)curve;
-(BOOL)_hasSpringAttributes;
-(double)_springDamping;
-(double)_springVelocity;
-(double)_springMass;
-(double)_springStiffness;
@end

