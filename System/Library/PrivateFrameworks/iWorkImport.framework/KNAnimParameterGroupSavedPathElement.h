/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface KNAnimParameterGroupSavedPathElement : NSObject <NSCoding> {

	unsigned long long _elementType;
	CGPoint _toPoint;
	CGPoint _cp1;
	CGPoint _cp2;

}

@property (assign,nonatomic) unsigned long long elementType;              //@synthesize elementType=_elementType - In the implementation block
@property (assign,nonatomic) CGPoint toPoint;                             //@synthesize toPoint=_toPoint - In the implementation block
@property (assign,nonatomic) CGPoint cp1;                                 //@synthesize cp1=_cp1 - In the implementation block
@property (assign,nonatomic) CGPoint cp2;                                 //@synthesize cp2=_cp2 - In the implementation block
-(CGPoint)cp1;
-(CGPoint)cp2;
-(void)setToPoint:(CGPoint)arg1 ;
-(void)setCp1:(CGPoint)arg1 ;
-(void)setCp2:(CGPoint)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)elementType;
-(void)setElementType:(unsigned long long)arg1 ;
-(CGPoint)toPoint;
@end

