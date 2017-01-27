/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAceView.h>

@class NSArray, NSString, NSURL;

@interface SAUTSContentShelf : SAAceView

@property (nonatomic,copy) NSArray * contentHead; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSURL * url; 
+(id)contentShelf;
+(id)contentShelfWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSURL *)url;
-(NSString *)title;
-(void)setUrl:(NSURL *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)contentHead;
-(void)setContentHead:(NSArray *)arg1 ;
@end

