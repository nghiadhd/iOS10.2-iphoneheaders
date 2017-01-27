/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSArray, NSString;

@interface _INVocabularyGenerationDiff : NSObject {

	BOOL _isFullReset;
	NSSet* _deletedSiriIDs;
	NSArray* _updatedVocabularyItems;
	long long _countOfVocabularyItemsAfterApplying;
	NSString* _intentSlotName;
	NSString* _appBundleID;

}

@property (nonatomic,copy) NSSet * deletedSiriIDs;                                       //@synthesize deletedSiriIDs=_deletedSiriIDs - In the implementation block
@property (nonatomic,copy) NSArray * updatedVocabularyItems;                             //@synthesize updatedVocabularyItems=_updatedVocabularyItems - In the implementation block
@property (assign,nonatomic) long long countOfVocabularyItemsAfterApplying;              //@synthesize countOfVocabularyItemsAfterApplying=_countOfVocabularyItemsAfterApplying - In the implementation block
@property (assign,nonatomic) BOOL isFullReset;                                           //@synthesize isFullReset=_isFullReset - In the implementation block
@property (nonatomic,copy) NSString * intentSlotName;                                    //@synthesize intentSlotName=_intentSlotName - In the implementation block
@property (nonatomic,copy) NSString * appBundleID;                                       //@synthesize appBundleID=_appBundleID - In the implementation block
-(id)description;
-(NSString *)intentSlotName;
-(void)setIntentSlotName:(NSString *)arg1 ;
-(BOOL)hasChanges;
-(NSString *)appBundleID;
-(void)setAppBundleID:(NSString *)arg1 ;
-(void)setIsFullReset:(BOOL)arg1 ;
-(void)setCountOfVocabularyItemsAfterApplying:(long long)arg1 ;
-(void)setUpdatedVocabularyItems:(NSArray *)arg1 ;
-(void)setDeletedSiriIDs:(NSSet *)arg1 ;
-(BOOL)isFullReset;
-(NSSet *)deletedSiriIDs;
-(NSArray *)updatedVocabularyItems;
-(long long)countOfVocabularyItemsAfterApplying;
@end

