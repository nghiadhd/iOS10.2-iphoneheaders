/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface CPTextLineMerge : NSObject {

	NSMutableArray* avail;

}
-(void)mergeLinesIn:(id)arg1 ;
-(BOOL)fits:(id)arg1 into:(id)arg2 ;
-(void)mergeColumn:(id)arg1 ;
-(void)addInterval:(id)arg1 to:(id)arg2 ;
-(void)mergeLinesInInterval:(id)arg1 from:(id)arg2 ;
-(void)detachDropCaps:(id)arg1 to:(id)arg2 ;
-(double)averageHeight:(id)arg1 ;
-(unsigned)countOverlapsOfLineAtIndex:(unsigned)arg1 in:(id)arg2 ;
-(id)findLineFor:(id)arg1 in:(id)arg2 ;
-(BOOL)hasOverlappingLines;
-(void)makeOverlappingLinesTo:(id)arg1 ;
-(void)dropCaps:(id)arg1 to:(id)arg2 ;
-(void)eliminate:(id)arg1 ;
-(void)mergeByColumn:(id)arg1 ;
-(void)removeOverlapping:(id)arg1 ;
@end

