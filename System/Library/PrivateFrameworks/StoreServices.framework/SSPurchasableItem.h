/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:34:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, SSSQLiteDatabase;

@interface SSPurchasableItem : NSObject {

	NSDictionary* _propertyValues;
	NSString* _tableName;
	SSSQLiteDatabase* _database;

}
+(id)sortByDatePurchasedKey;
+(id)allPropertyKeys;
+(id)databaseTable;
-(long long)accountUniqueIdentifier;
-(id)initWithPropertyValues:(id)arg1 ;
-(void)dealloc;
-(BOOL)isHidden;
-(id)description;
-(id)datePurchased;
-(long long)storeID;
-(id)propertyValues;
-(long long)pid;
@end
