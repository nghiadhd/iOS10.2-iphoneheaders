/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLIndexMapperDataSource;
@interface PLIndexMapper : NSObject {

	id<PLIndexMapperDataSource> _dataSource;

}
-(id)initWithDataSource:(id)arg1 ;
-(BOOL)applyContainerChangeNotification:(id)arg1 changeTypes:(int)arg2 toFilteredIndexes:(id)arg3 ;
-(unsigned long long)indexForBackingIndex:(unsigned long long)arg1 ;
-(unsigned long long)backingIndexForIndex:(unsigned long long)arg1 ;
-(id)backingIndexesForIndexes:(id)arg1 ;
-(id)indexesForBackingIndexes:(id)arg1 ;
@end
