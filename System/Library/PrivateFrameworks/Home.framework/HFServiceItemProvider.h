/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemProvider.h>

@protocol HFCharacteristicValueSource;
@class NSMutableSet, NSArray;

@interface HFServiceItemProvider : HFItemProvider {

	/*^block*/id _filter;
	NSMutableSet* _serviceItems;
	NSArray* _serviceTypes;
	id<HFCharacteristicValueSource> _overrideValueSource;

}

@property (nonatomic,retain) NSMutableSet * serviceItems;                                      //@synthesize serviceItems=_serviceItems - In the implementation block
@property (nonatomic,retain) NSArray * serviceTypes;                                           //@synthesize serviceTypes=_serviceTypes - In the implementation block
@property (nonatomic,retain) id<HFCharacteristicValueSource> overrideValueSource;              //@synthesize overrideValueSource=_overrideValueSource - In the implementation block
@property (nonatomic,copy) id filter;                                                          //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain) id<HFCharacteristicValueSource> valueSource; 
+(id)standardServices;
-(id)items;
-(void)setFilter:(id)arg1 ;
-(id)filter;
-(id)initWithHome:(id)arg1 ;
-(id<HFCharacteristicValueSource>)overrideValueSource;
-(void)setOverrideValueSource:(id<HFCharacteristicValueSource>)arg1 ;
-(NSArray *)serviceTypes;
-(NSMutableSet *)serviceItems;
-(void)setServiceItems:(NSMutableSet *)arg1 ;
-(void)setServiceTypes:(NSArray *)arg1 ;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)invalidationReasons;
-(id)reloadItems;
-(id)initWithHome:(id)arg1 serviceTypes:(id)arg2 ;
-(void)setValueSource:(id<HFCharacteristicValueSource>)arg1 ;
@end

