/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainSearchResults.h>

@class NSArray;

@interface SAAnswerSearchResults : SADomainSearchResults

@property (nonatomic,copy) NSArray * results; 
+(id)searchResultsWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)searchResults;
-(NSArray *)results;
-(void)setResults:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end
