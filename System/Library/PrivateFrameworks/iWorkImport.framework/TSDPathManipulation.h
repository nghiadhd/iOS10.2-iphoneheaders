/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSDPathManipulation : NSObject {

	TSDPathManipulation* mPrecedingManipulation;

}
-(id)initWithProperties:(id)arg1 bundle:(id)arg2 dataManager:(void*)arg3 precedingManipulation:(id)arg4 ;
-(CGPathRef)manipulatePath:(CGPathRef)arg1 withLineWidth:(double)arg2 ;
-(BOOL)canDecomposeRectIntoParts;
-(void)dealloc;
@end

