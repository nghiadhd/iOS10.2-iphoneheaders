/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:58 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKAction.h>
#import <libobjc.A.dylib/OKActionKeyPressedExports.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface OKActionKeyPressed : OKAction <OKActionKeyPressedExports, NSSecureCoding> {

	BOOL isKeyUp;
	NSString* keyPressed;
	double timestamp;

}

@property (nonatomic,retain) NSString * keyPressed; 
@property (nonatomic,readonly) double timestamp; 
@property (nonatomic,readonly) BOOL isKeyUp; 
+(BOOL)supportsSecureCoding;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)keyPressedActionWithKey:(id)arg1 atTime:(double)arg2 isKeyUp:(BOOL)arg3 withLocation:(CGPoint)arg4 context:(id)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(double)timestamp;
-(void)setKeyPressed:(NSString *)arg1 ;
-(NSString *)keyPressed;
-(BOOL)isKeyUp;
@end

