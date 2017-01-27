/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableString, NSMutableOrderedSet, NSMapTable, NSArray, NSString;

@interface SKUIMetricsImpressionSession : NSObject {

	NSMutableArray* _impressionIdentifiers;
	NSMutableString* _impressionsString;
	NSMutableOrderedSet* _impressionableViewElements;
	NSMapTable* _impressionableViewElementsTimerMap;

}

@property (nonatomic,copy,readonly) NSArray * impressionIdentifiers;                   //@synthesize impressionIdentifiers=_impressionIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSString * impressionsString;                      //@synthesize impressionsString=_impressionsString - In the implementation block
@property (nonatomic,copy,readonly) NSArray * impressionableViewElements; 
-(id)init;
-(NSArray *)impressionableViewElements;
-(NSString *)impressionsString;
-(void)beginActiveImpressionForViewElement:(id)arg1 ;
-(void)endAllPendingActiveImpression;
-(void)endActiveImpressionForViewElement:(id)arg1 ;
-(void)addItemViewElement:(id)arg1 ;
-(void)addItemIdentifier:(long long)arg1 ;
-(NSArray *)impressionIdentifiers;
-(id)_getTimerForViewElement:(id)arg1 ;
-(void)_clearTimerForViewElement:(id)arg1 ;
-(void)_setTimer:(id)arg1 forViewElement:(id)arg2 ;
-(id)_allViewElementsInTimerMap;
@end

