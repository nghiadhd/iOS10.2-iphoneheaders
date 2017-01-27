/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNCancelable.h>

@protocol CNAutocompleteLocalQueryDelegate;
@class CNAutocompleteFetchRequest, CNContactStore, NSString;

@interface CNAutocompleteLocalQuery : NSObject <CNCancelable> {

	CNAutocompleteFetchRequest* _request;
	CNContactStore* _contactStore;
	CNContactStore* _contactFetcherStore;
	id<CNAutocompleteLocalQueryDelegate> _delegate;

}

@property (retain) CNAutocompleteFetchRequest * request;              //@synthesize request=_request - In the implementation block
@property (retain) CNContactStore * contactStore;                     //@synthesize contactStore=_contactStore - In the implementation block
@property (retain) CNContactStore * contactFetcherStore;              //@synthesize contactFetcherStore=_contactFetcherStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)queryWithDelegate:(id)arg1 ;
+(id)peopleQuery;
+(id)groupsQuery;
-(void)cancel;
-(CNAutocompleteFetchRequest *)request;
-(id)run;
-(void)setRequest:(CNAutocompleteFetchRequest *)arg1 ;
-(CNContactStore *)contactStore;
-(id)searchableProperties;
-(id)makeResultFactory;
-(id)autocompleteResultsForFetchResults:(id)arg1 resultFactory:(id)arg2 ;
-(CNContactStore *)contactFetcherStore;
-(void)setContactFetcherStore:(CNContactStore *)arg1 ;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(id)fetchResults;
@end

