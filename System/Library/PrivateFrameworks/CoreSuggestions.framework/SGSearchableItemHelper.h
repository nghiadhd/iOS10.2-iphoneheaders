/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SGSearchableItemHelper : NSObject
+(BOOL)searchableItemIsRecent:(id)arg1 emailHeaders:(id)arg2 ;
+(BOOL)searchableItemIsValid:(id)arg1 emailHeaders:(id)arg2 mailboxIdentifiers:(id)arg3 ;
+(BOOL)searchableItemIsInDrafts:(id)arg1 mailboxIdentifiers:(id)arg2 ;
+(BOOL)searchableItemIsInSent:(id)arg1 mailboxIdentifiers:(id)arg2 ;
+(BOOL)searchableItemIsInTrash:(id)arg1 mailboxIdentifiers:(id)arg2 ;
+(BOOL)searchableItemIsFromSupportedAccount:(id)arg1 ;
+(BOOL)searchableItemIsEmpty:(id)arg1 ;
+(BOOL)searchableItemIsSPAM:(id)arg1 emailHeaders:(id)arg2 mailboxIdentifiers:(id)arg3 ;
+(BOOL)searchableItemIsRecent:(id)arg1 ;
+(BOOL)searchableItemIsValid:(id)arg1 ;
+(BOOL)searchableItemIsInDrafts:(id)arg1 ;
+(BOOL)searchableItemIsInTrash:(id)arg1 ;
+(BOOL)searchableItemIsTooBig:(id)arg1 ;
+(id)serializeAttributes:(id)arg1 ;
+(id)serializeAttributesAndBody:(id)arg1 ;
+(id)deserializeAttributes:(id)arg1 ;
+(id)deserializeAttributesAndBody:(id)arg1 ;
+(BOOL)searchableItemIsInSent:(id)arg1 ;
+(id)deserializeAttributes:(id)arg1 andBody:(id)arg2 ;
+(id)messageIdHeaderValues:(id)arg1 ;
+(BOOL)searchableItemIsSPAM:(id)arg1 ;
+(BOOL)searchableItemIsEligibleForHarvesting:(id)arg1 ;
@end

