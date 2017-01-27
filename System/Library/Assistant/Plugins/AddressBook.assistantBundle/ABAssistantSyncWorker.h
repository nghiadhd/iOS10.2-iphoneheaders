/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/Plugins/AddressBook.assistantBundle/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/AFSyncHandler.h>

@protocol ABAssistantSyncDelegate;
@class NSString;

@interface ABAssistantSyncWorker : NSObject <AFSyncHandler> {

	id<ABAssistantSyncDelegate> _delegate;
	CFArrayRef _allRecords;
	CFArrayRef _changedIDs;
	CFArrayRef _changeTypes;
	CFArrayRef _sequenceNumbers;
	long long _syncIndex;
	long long _syncCount;
	BOOL _databaseNotAvailable;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)syncSnapshotForKey:(id)arg1 ;
-(void)clearSyncCache;
-(void)syncDidEnd;
-(id)getCurrentValidity;
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 forKey:(id)arg3 beginInfo:(id)arg4 ;
-(void)getChangeAfterAnchor:(id)arg1 changeInfo:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
@end

