/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:52 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMTranscriptChatItem.h>
#import <IMCore/IMMessageChatItem.h>

@class IMHandle, NSString, NSDate;

@interface IMLocationShareOfferChatItem : IMTranscriptChatItem <IMMessageChatItem> {

	IMHandle* _sender;
	BOOL _actionableEclipsed;

}

@property (nonatomic,readonly) long long offerState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isFromMe; 
@property (nonatomic,readonly) BOOL failed; 
@property (nonatomic,readonly) NSDate * time; 
@property (nonatomic,readonly) IMHandle * sender;                   //@synthesize sender=_sender - In the implementation block
-(Class)__ck_chatItemClass;
-(IMHandle *)sender;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)time;
-(id)_initWithItem:(id)arg1 sender:(id)arg2 ;
-(void)_setActionableEclipsed:(BOOL)arg1 ;
-(BOOL)_isActionableEclipsed;
-(long long)offerState;
-(BOOL)isFromMe;
-(BOOL)failed;
@end

