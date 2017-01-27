/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAMPMediaEntity : SADomainObject

@property (nonatomic,copy) NSString * mediaType; 
@property (nonatomic,copy) NSString * releaseDate; 
@property (nonatomic,copy) NSString * sortTitle; 
@property (nonatomic,copy) NSString * title; 
+(id)mediaEntity;
+(id)mediaEntityWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)sortTitle;
-(void)setSortTitle:(NSString *)arg1 ;
-(NSString *)releaseDate;
-(void)setReleaseDate:(NSString *)arg1 ;
-(NSString *)mediaType;
-(void)setMediaType:(NSString *)arg1 ;
@end

