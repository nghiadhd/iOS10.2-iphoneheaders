/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IKColor, UIColor, NSArray;

@interface TVColor : NSObject <NSCopying> {

	IKColor* _ikColor;

}

@property (nonatomic,__weak,readonly) IKColor * ikColor;              //@synthesize ikColor=_ikColor - In the implementation block
@property (nonatomic,readonly) long long colorType; 
@property (nonatomic,readonly) UIColor * color; 
@property (nonatomic,readonly) NSArray * gradientColors; 
@property (nonatomic,readonly) NSArray * gradientPoints; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)color;
-(id)initWithColor:(id)arg1 ;
-(NSArray *)gradientColors;
-(IKColor *)ikColor;
-(long long)colorType;
-(NSArray *)gradientPoints;
@end

