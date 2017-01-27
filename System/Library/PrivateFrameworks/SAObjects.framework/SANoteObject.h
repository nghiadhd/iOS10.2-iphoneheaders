/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSDate;

@interface SANoteObject : SADomainObject

@property (nonatomic,copy) NSString * contents; 
@property (nonatomic,copy) NSDate * createdDate; 
@property (nonatomic,copy) NSDate * lastModifiedDate; 
@property (assign,nonatomic) BOOL restricted; 
@property (nonatomic,copy) NSString * title; 
+(id)object;
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)contents;
-(void)setContents:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
-(NSDate *)lastModifiedDate;
-(void)setRestricted:(BOOL)arg1 ;
-(NSDate *)createdDate;
-(void)setCreatedDate:(NSDate *)arg1 ;
-(BOOL)restricted;
@end

