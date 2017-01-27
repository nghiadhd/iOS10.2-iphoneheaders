/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNAutocompleteProbeProvider, CNScheduler;
@class CNAutocompleteStoreQueryHelper, CNCancelationToken, CNAutocompleteUserSession;

@interface CNAutocompleteStore : NSObject {

	double _fetchCoalescingInterval;
	CNAutocompleteStoreQueryHelper* _queryHelper;
	CNCancelationToken* _currentFetchToken;
	CNAutocompleteUserSession* _userSession;
	id<CNAutocompleteProbeProvider> _probeProvider;
	id<CNScheduler> _scheduler;

}

@property (nonatomic,readonly) CNAutocompleteStoreQueryHelper * queryHelper;                 //@synthesize queryHelper=_queryHelper - In the implementation block
@property (assign,nonatomic,__weak) CNCancelationToken * currentFetchToken;                  //@synthesize currentFetchToken=_currentFetchToken - In the implementation block
@property (nonatomic,retain) CNAutocompleteUserSession * userSession;                        //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,readonly) id<CNAutocompleteProbeProvider> probeProvider;                //@synthesize probeProvider=_probeProvider - In the implementation block
@property (nonatomic,readonly) id<CNAutocompleteSearchProvider> searchProvider; 
@property (nonatomic,readonly) id<CNScheduler> scheduler;                                    //@synthesize scheduler=_scheduler - In the implementation block
@property (assign,nonatomic) double fetchCoalescingInterval;                                 //@synthesize fetchCoalescingInterval=_fetchCoalescingInterval - In the implementation block
+(double)defaultFetchCoalescingInterval;
-(id)init;
-(id)initWithDelegate:(id)arg1 ;
-(CNAutocompleteUserSession *)userSession;
-(void)setUserSession:(CNAutocompleteUserSession *)arg1 ;
-(id)scheduleFetchRequest:(id)arg1 ;
-(id<CNAutocompleteProbeProvider>)probeProvider;
-(id)initWithDelegate:(id)arg1 searchProvider:(id)arg2 probeProvider:(id)arg3 scheduler:(id)arg4 ;
-(id)executeFetchRequest:(id)arg1 ;
-(CNAutocompleteStoreQueryHelper *)queryHelper;
-(id<CNAutocompleteSearchProvider>)searchProvider;
-(double)fetchCoalescingInterval;
-(id)executeFetchRequest:(id)arg1 delegate:(id)arg2 ;
-(id)executeFetchRequest:(id)arg1 afterDelay:(double)arg2 delegate:(id)arg3 ;
-(CNCancelationToken *)currentFetchToken;
-(void)setCurrentFetchToken:(CNCancelationToken *)arg1 ;
-(void)setFetchCoalescingInterval:(double)arg1 ;
-(id)scheduleFetchRequest:(id)arg1 delegate:(id)arg2 ;
-(void)userSelectedResult:(id)arg1 atSortedIndex:(unsigned long long)arg2 ;
-(void)ignoreResult:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<CNScheduler>)scheduler;
@end

