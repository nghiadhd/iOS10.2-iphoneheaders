/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface TSWPShapeRepStageChunk : NSObject {

	long long _stageIndex;
	NSArray* _storageRanges;

}

@property (assign,nonatomic) long long stageIndex;                 //@synthesize stageIndex=_stageIndex - In the implementation block
@property (nonatomic,retain) NSArray * storageRanges;              //@synthesize storageRanges=_storageRanges - In the implementation block
-(long long)stageIndex;
-(void)setStageIndex:(long long)arg1 ;
-(NSArray *)storageRanges;
-(void)setStorageRanges:(NSArray *)arg1 ;
-(void)dealloc;
-(id)description;
@end

