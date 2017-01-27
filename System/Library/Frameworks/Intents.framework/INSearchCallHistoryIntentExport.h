/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INDateComponentsRange, INPerson;


@protocol INSearchCallHistoryIntentExport <NSObject,JSExport>
@property (assign,nonatomic) long long callType; 
@property (nonatomic,copy) INDateComponentsRange * dateCreated; 
@property (nonatomic,copy) INPerson * recipient; 
@property (assign,nonatomic) unsigned long long callCapabilities; 
@required
-(id)init;
-(void)setCallType:(long long)arg1;
-(long long)callType;
-(INDateComponentsRange *)dateCreated;
-(void)setDateCreated:(id)arg1;
-(INPerson *)recipient;
-(void)setRecipient:(id)arg1;
-(unsigned long long)callCapabilities;
-(void)setCallCapabilities:(unsigned long long)arg1;

@end

