/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:17 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVPropertyFindBaseTask.h>

@class NSSet, NSDictionary;

@interface CoreDAVPrincipalPropertySearchTask : CoreDAVPropertyFindBaseTask {

	NSSet* _searchItems;
	BOOL _applyToPrincipalCollectionSet;
	NSDictionary* _extraAttributes;

}

@property (nonatomic,retain) NSSet * searchItems;                             //@synthesize searchItems=_searchItems - In the implementation block
@property (nonatomic,retain) NSDictionary * extraAttributes;                  //@synthesize extraAttributes=_extraAttributes - In the implementation block
@property (assign,nonatomic) BOOL applyToPrincipalCollectionSet;              //@synthesize applyToPrincipalCollectionSet=_applyToPrincipalCollectionSet - In the implementation block
-(NSSet *)searchItems;
-(void)setSearchItems:(NSSet *)arg1 ;
-(void)dealloc;
-(void)setExtraAttributes:(NSDictionary *)arg1 ;
-(void)setApplyToPrincipalCollectionSet:(BOOL)arg1 ;
-(id)initWithPropertySearches:(id)arg1 propertiesToFind:(id)arg2 atURL:(id)arg3 applyToPrincipalCollectionSet:(BOOL)arg4 extraAttributes:(id)arg5 ;
-(BOOL)applyToPrincipalCollectionSet;
-(NSDictionary *)extraAttributes;
-(id)requestBody;
-(id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2 ;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)httpMethod;
@end

