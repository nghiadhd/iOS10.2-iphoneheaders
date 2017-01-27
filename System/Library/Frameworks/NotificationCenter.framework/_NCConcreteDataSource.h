/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary, NSArray;

@interface _NCConcreteDataSource : NSObject {

	NSMutableArray* _observers;
	NSMutableDictionary* _identifiersToData;

}

@property (nonatomic,readonly) NSArray * dataIdentifiers; 
@property (nonatomic,readonly) NSArray * data; 
-(id)init;
-(NSArray *)data;
-(void)addObserver:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeObserver:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dataSource:(id)arg1 replaceWithDatum:(id)arg2 observerUpdateBlock:(/*^block*/id)arg3 ;
-(void)dataSource:(id)arg1 removeDatumWithIdentifier:(id)arg2 observerUpdateBlock:(/*^block*/id)arg3 ;
-(NSArray *)dataIdentifiers;
-(id)datumWithIdentifier:(id)arg1 ;
@end

