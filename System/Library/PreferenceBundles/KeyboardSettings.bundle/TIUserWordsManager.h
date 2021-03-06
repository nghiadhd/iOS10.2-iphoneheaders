/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _KSTextReplacementClientStore, NSMutableArray, NSArray;

@interface TIUserWordsManager : NSObject {

	_KSTextReplacementClientStore* _textReplacementStore;
	NSMutableArray* _observers;
	NSArray* _cache;

}

@property (nonatomic,retain) NSArray * cache;                         //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain,readonly) NSArray * entries; 
-(id)init;
-(void)dealloc;
-(id)addObserver:(/*^block*/id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSArray *)entries;
-(NSArray *)cache;
-(void)setCache:(NSArray *)arg1 ;
-(void)requestSync;
-(void)addEntries:(id)arg1 removeEntries:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)notifyObserversOfChange;
@end

