/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, INDateComponentsRange;


@protocol INSearchForMessagesIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSArray * recipients; 
@property (nonatomic,copy) NSArray * senders; 
@property (nonatomic,copy) NSArray * searchTerms; 
@property (assign,nonatomic) unsigned long long attributes; 
@property (nonatomic,copy) INDateComponentsRange * dateTimeRange; 
@property (nonatomic,copy) NSArray * identifiers; 
@property (nonatomic,copy) NSArray * notificationIdentifiers; 
@property (nonatomic,copy) NSArray * groupNames; 
@required
-(id)init;
-(unsigned long long)attributes;
-(void)setAttributes:(unsigned long long)arg1;
-(NSArray *)identifiers;
-(NSArray *)recipients;
-(void)setRecipients:(id)arg1;
-(void)setSenders:(id)arg1;
-(NSArray *)senders;
-(NSArray *)searchTerms;
-(void)setSearchTerms:(id)arg1;
-(void)setDateTimeRange:(id)arg1;
-(INDateComponentsRange *)dateTimeRange;
-(void)setNotificationIdentifiers:(id)arg1;
-(void)setGroupNames:(id)arg1;
-(NSArray *)notificationIdentifiers;
-(NSArray *)groupNames;
-(void)setIdentifiers:(id)arg1;

@end

