/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, NSArray;

@interface SASTTSSelectionStatistics : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * completionType; 
@property (nonatomic,copy) NSString * interactionId; 
@property (nonatomic,copy) NSArray * listenedItems; 
@property (assign,nonatomic) long long selectedItemIndex; 
@property (nonatomic,copy) NSString * sessionId; 
@property (nonatomic,copy) NSArray * timesListened; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)tTSSelectionStatistics;
+(id)tTSSelectionStatisticsWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setSessionId:(NSString *)arg1 ;
-(NSString *)sessionId;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)interactionId;
-(void)setInteractionId:(NSString *)arg1 ;
-(NSString *)completionType;
-(void)setCompletionType:(NSString *)arg1 ;
-(NSArray *)listenedItems;
-(void)setListenedItems:(NSArray *)arg1 ;
-(NSArray *)timesListened;
-(void)setTimesListened:(NSArray *)arg1 ;
-(long long)selectedItemIndex;
-(void)setSelectedItemIndex:(long long)arg1 ;
@end

