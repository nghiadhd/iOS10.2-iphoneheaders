/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSTMergeListWrapper : NSObject {

	vector<TSUCellRect, std::__1::allocator<TSUCellRect> >* _mergeList;

}

@property (readonly) unsigned long long count; 
@property (readonly) BOOL isEmpty; 
-(id)initWithMergeList:(const vector<TSUCellRect, std::__1::allocator<TSUCellRect> >*)arg1 ;
-(id)regionForList;
-(unsigned long long)count;
-(BOOL)isEmpty;
-(void)enumerateRangesUsingBlock:(/*^block*/id)arg1 ;
-(void)addRange:(TSUCellRect)arg1 ;
@end

