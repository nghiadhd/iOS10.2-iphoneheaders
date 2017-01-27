/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class NSString, NSURL, NSArray;

@interface SAGuidanceGuideDomainSnippet : SAUISnippet

@property (nonatomic,copy) NSString * domainAlternateDisplayName; 
@property (nonatomic,copy) NSString * domainDisplayName; 
@property (nonatomic,copy) NSURL * domainIconURI; 
@property (nonatomic,copy) NSString * domainName; 
@property (nonatomic,copy) NSArray * guideSections; 
@property (nonatomic,copy) NSString * iconDisplayIdentifier; 
@property (assign,nonatomic) BOOL iconNeedsProcessing; 
@property (nonatomic,copy) NSString * iconResourceName; 
@property (assign,nonatomic) BOOL isAppIcon; 
@property (assign,nonatomic) BOOL performIntentEnabledAppAuthorizationCheck; 
@property (nonatomic,copy) NSString * tagPhrase; 
+(id)guideDomainSnippet;
+(id)guideDomainSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)domainAlternateDisplayName;
-(void)setDomainAlternateDisplayName:(NSString *)arg1 ;
-(NSString *)domainDisplayName;
-(void)setDomainDisplayName:(NSString *)arg1 ;
-(NSURL *)domainIconURI;
-(void)setDomainIconURI:(NSURL *)arg1 ;
-(NSArray *)guideSections;
-(void)setGuideSections:(NSArray *)arg1 ;
-(NSString *)iconDisplayIdentifier;
-(void)setIconDisplayIdentifier:(NSString *)arg1 ;
-(BOOL)iconNeedsProcessing;
-(void)setIconNeedsProcessing:(BOOL)arg1 ;
-(NSString *)iconResourceName;
-(void)setIconResourceName:(NSString *)arg1 ;
-(BOOL)isAppIcon;
-(void)setIsAppIcon:(BOOL)arg1 ;
-(BOOL)performIntentEnabledAppAuthorizationCheck;
-(void)setPerformIntentEnabledAppAuthorizationCheck:(BOOL)arg1 ;
-(NSString *)tagPhrase;
-(void)setTagPhrase:(NSString *)arg1 ;
-(void)setDomainName:(NSString *)arg1 ;
-(NSString *)domainName;
@end

