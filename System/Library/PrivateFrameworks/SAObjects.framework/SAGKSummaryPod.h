/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAGKPodView.h>

@class NSString, SAUIImageResource;

@interface SAGKSummaryPod : SAGKPodView

@property (nonatomic,copy) NSString * caption; 
@property (nonatomic,retain) SAUIImageResource * imageResource; 
@property (nonatomic,copy) NSString * text; 
+(id)summaryPod;
+(id)summaryPodWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSString *)caption;
-(id)groupIdentifier;
-(void)setCaption:(NSString *)arg1 ;
-(id)encodedClassName;
-(SAUIImageResource *)imageResource;
-(void)setImageResource:(SAUIImageResource *)arg1 ;
@end

