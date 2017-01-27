/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SGDSuggestManagerMessagesProtocol;
@class NSMutableDictionary;

@interface SGMessagesDaemonConnection : NSObject {

	NSMutableDictionary* _contextSent;
	id<SGDSuggestManagerMessagesProtocol> _remoteSuggestionManager;

}
-(void)dealloc;
-(void)connectionInterrupted;
-(void)setManagerForTesting:(id)arg1 ;
-(id)initWithDaemonConnection:(id)arg1 ;
-(BOOL)hasContextBeenSentForConversation:(id)arg1 ;
-(void)didSendContextForConversation:(id)arg1 ;
-(id)remoteSuggestionManager;
@end

