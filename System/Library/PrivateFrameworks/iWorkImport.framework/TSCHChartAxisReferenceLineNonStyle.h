/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSCHChartAxisID, NSArray;

@interface TSCHChartAxisReferenceLineNonStyle : NSObject {

	TSCHChartAxisID* mAxisIdentifier;
	NSArray* mReferenceLineNonStyleItems;

}

@property (nonatomic,copy) TSCHChartAxisID * axisIdentifier; 
@property (nonatomic,copy) NSArray * referenceLineNonStyleItems; 
-(void)didInitFromSOS;
-(TSCHChartAxisID *)axisIdentifier;
-(void)setAxisIdentifier:(TSCHChartAxisID *)arg1 ;
-(NSArray *)referenceLineNonStyleItems;
-(void)setReferenceLineNonStyleItems:(NSArray *)arg1 ;
-(void)dealloc;
@end

