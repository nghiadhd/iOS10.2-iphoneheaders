/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/ClientFlowService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>
#import <libobjc.A.dylib/SAAceSerializable.h>

@class CFCNAutoCompleteFetchContext, NSArray, NSString;

@interface CFCNAutoCompleteFetchRequest : SADomainCommand <SAAceSerializable>

@property (nonatomic,retain) CFCNAutoCompleteFetchContext * fetchContext; 
@property (nonatomic,copy) NSArray * fetchRequestOptions; 
@property (nonatomic,copy) NSString * priorityDomainForSorting; 
@property (nonatomic,copy) NSString * searchString; 
@property (nonatomic,copy) NSString * searchType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newAceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)autoCompleteFetchRequest;
+(id)autoCompleteFetchRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(CFCNAutoCompleteFetchContext *)fetchContext;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(NSString *)searchType;
-(void)setSearchType:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)priorityDomainForSorting;
-(void)setPriorityDomainForSorting:(NSString *)arg1 ;
-(void)setFetchContext:(CFCNAutoCompleteFetchContext *)arg1 ;
-(NSArray *)fetchRequestOptions;
-(void)setFetchRequestOptions:(NSArray *)arg1 ;
@end

