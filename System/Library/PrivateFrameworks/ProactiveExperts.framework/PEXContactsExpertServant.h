/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveExperts/PEXServant.h>

@protocol SGSuggestionsServiceContactsProtocol, OS_dispatch_semaphore;
@class CNContactStore, PEXContact, NSCache, NSArray, NSString, PEXContactScorer, NSObject;

@interface PEXContactsExpertServant : PEXServant {

	CNContactStore* _store;
	PEXContact* _meContact;
	NSCache* _mePredictionCache;
	id<SGSuggestionsServiceContactsProtocol> _contactService;
	NSArray* _peopleKeysToFetch;
	NSArray* _namesKeysToFetch;
	id _sgObserverRegistrationToken;
	id _cnObserverRegistrationToken;
	NSString* identifier;
	NSCache* _cachedNameLookups;
	PEXContactScorer* _contactScorer;
	NSObject*<OS_dispatch_semaphore> _initializationComplete;

}
-(id)init;
-(void)dealloc;
-(void)_registerForNotifications;
-(void)setStore:(id)arg1 ;
-(void)setContactScorer:(id)arg1 ;
-(id)predictionForCriteria:(id)arg1 limit:(unsigned long long)arg2 ;
-(void)setContactService:(id)arg1 ;
-(void)setCachedNameLookup:(id)arg1 ;
-(void)_preloadContacts;
-(id)_predictionForPeopleCriteria:(id)arg1 limit:(unsigned long long)arg2 ;
-(id)uncachedPredictionForNamesCriteria:(id)arg1 limit:(unsigned long long)arg2 ;
-(void)_namesForAllFoundOnDeviceWithCompletion:(/*^block*/id)arg1 ;
-(id)_nameItemsForAllContacts;
-(id)_decPredictionFromNameItemArray:(id)arg1 ;
-(id)_predictMeCardDetailForCriteria:(id)arg1 limit:(unsigned long long)arg2 ;
-(id)_lookupScoredPeopleWithNamePrefix:(id)arg1 andRecipients:(id)arg2 ;
-(id)_applySmartLimitingToCandidates:(id)arg1 clientLimit:(unsigned long long)arg2 ;
-(id)_mePredictionCacheKeyForCriteria:(id)arg1 ;
-(id)_lookupPeopleWithNamePrefix:(id)arg1 andRecipients:(id)arg2 ;
-(id)_lookupPeopleWithNamePrefixUncached:(id)arg1 andRecipients:(id)arg2 ;
-(id)_predictionForNamesCriteria:(id)arg1 limit:(unsigned long long)arg2 ;
@end
