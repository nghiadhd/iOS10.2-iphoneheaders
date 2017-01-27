/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBStatusBarStateAggregatorPosting.h>
#import <UIKit/UIStatusBarStateProvider.h>

@class SBStatusBarStateAggregator, NSHashTable, NSMutableArray, NSString;

@interface SBStatusBarStateProvider : NSObject <SBStatusBarStateAggregatorPosting, UIStatusBarStateProvider> {

	SBStatusBarStateAggregator* _stateAggregator;
	NSHashTable* _stateObservers;
	SCD_Struct_SB49 _aggregatorData;
	int _aggregatorActions;
	SCD_Struct_SB49 _lastPost;
	unsigned long long _coalescentBlockDepth;
	BOOL _itemNeedsPost[34];
	BOOL _anyItemNeedsPost;
	BOOL _nonItemDataNeedsPost;
	BOOL _posting;
	NSMutableArray* _stylesWithDetailUpdates;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginCoalescentBlock;
-(void)endCoalescentBlock;
-(void)updateStatusBarItem:(int)arg1 ;
-(void)statusBarStateAggregatorDidStartPost:(id)arg1 ;
-(void)statusBarStateAggregator:(id)arg1 didVisitItem:(int)arg2 withUpdates:(BOOL)arg3 toData:(const SCD_Struct_SB49*)arg4 ;
-(void)statusBarStateAggregator:(id)arg1 didUpdateNonItemData:(const SCD_Struct_SB49*)arg2 ;
-(void)statusBarStateAggregatorDidFinishPost:(id)arg1 withData:(const SCD_Struct_SB49*)arg2 actions:(int)arg3 ;
-(BOOL)_shouldPostForVisitedItem:(int)arg1 withUpdates:(BOOL)arg2 toAggregatorData:(const SCD_Struct_SB49*)arg3 ;
-(void)_composePostDataFromAggregatorData:(SCD_Struct_SB49*)arg1 ;
-(void)_composePostActionsFromAggregatorActions:(int*)arg1 ;
-(BOOL)_shouldPostForUpdatesToNonItemData:(const SCD_Struct_SB49*)arg1 ;
-(void)_didChangeDoubleHeightStatusStringForStyle:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)addStatusBarStateObserver:(id)arg1 ;
-(void)getStatusBarData:(SCD_Struct_SB49*)arg1 ;
-(void)removeStatusBarStateObserver:(id)arg1 ;
@end

