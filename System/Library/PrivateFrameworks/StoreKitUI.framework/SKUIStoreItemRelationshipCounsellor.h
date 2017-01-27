/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:03 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSRecursiveLock;

@interface SKUIStoreItemRelationshipCounsellor : NSObject {

	NSMutableDictionary* _relationshipsDictionary;
	NSRecursiveLock* _lock;

}

@property (nonatomic,retain) NSMutableDictionary * relationshipsDictionary;              //@synthesize relationshipsDictionary=_relationshipsDictionary - In the implementation block
@property (nonatomic,readonly) NSRecursiveLock * lock;                                   //@synthesize lock=_lock - In the implementation block
-(id)init;
-(NSRecursiveLock *)lock;
-(NSMutableDictionary *)relationshipsDictionary;
-(void)removeAllRelationshipsForItem:(id)arg1 ;
-(void)setChildren:(id)arg1 forParent:(id)arg2 ;
-(BOOL)itemHasParent:(id)arg1 ;
-(BOOL)itemHasChildren:(id)arg1 ;
-(id)childItemsForItem:(id)arg1 ;
-(id)parentItemForItem:(id)arg1 ;
-(id)siblingItemsForItem:(id)arg1 ;
-(id)familyForItem:(id)arg1 ;
-(void)addChildren:(id)arg1 forParent:(id)arg2 ;
-(void)setRelationshipsDictionary:(NSMutableDictionary *)arg1 ;
@end

