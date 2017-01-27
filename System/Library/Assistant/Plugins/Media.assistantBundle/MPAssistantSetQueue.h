/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/Plugins/Media.assistantBundle/Media
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAMPSetQueue.h>
#import <Accessibility/AFServiceCommand.h>

@protocol AFServiceHelper;
@class NSString;

@interface MPAssistantSetQueue : SAMPSetQueue <AFServiceCommand> {

	id<AFServiceHelper> _serviceHelper;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_networkConditionsPermitRadioPlayback;
-(BOOL)_networkConditionsPermitFusePlayback;
-(id)_performMediaItemsSetQueue;
-(BOOL)_radioIsAvailable;
-(id)_performRadioStationSetQueue;
-(id)_performStoreItemsSetQueue;
-(void)_prepare;
-(id)_perform;
-(void)performWithCompletion:(/*^block*/id)arg1 serviceHelper:(id)arg2 ;
@end

