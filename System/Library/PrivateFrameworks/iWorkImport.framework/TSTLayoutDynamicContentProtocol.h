/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSTLayoutDynamicContentProtocol <NSObject>
@optional
-(id)mergesIntersectingCellRegion:(id)arg1;
-(BOOL)mergeRange:(TSUCellRect*)arg1 forCellID:(TSUCellCoord)arg2;

@required
-(BOOL)cell:(id*)arg1 forCellID:(TSUCellCoord)arg2;
-(BOOL)dynamicContentMustDrawOnMainThread;

@end

