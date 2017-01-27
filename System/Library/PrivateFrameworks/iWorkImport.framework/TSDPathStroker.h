/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSUColor;

@interface TSDPathStroker : NSObject {

	TSUColor* mColor;
	double mWidth;
	TSDPathStroker* mPrecedingStroker;

}

@property (assign,nonatomic) double width; 
-(void)strokePath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 inColor:(id)arg3 ;
-(id)initWithProperties:(id)arg1 bundle:(id)arg2 dataManager:(void*)arg3 precedingStroker:(id)arg4 ;
-(void)dealloc;
-(double)width;
-(void)setWidth:(double)arg1 ;
@end

